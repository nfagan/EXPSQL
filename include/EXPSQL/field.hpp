//
//  Field.hpp
//  EXPSQL
//
//  Created by Nick Fagan on 11/15/17.
//

#ifndef Field_hpp
#define Field_hpp

#include <type_traits>
#include <string>

namespace EXP {
namespace sql {
    template<typename T>
    class field_priv
    {
    public:
        field_priv();
        field_priv(T data)
        {
            if (std::is_same<T, int>::value)
            {
                data_type = DT_INT;
            }
            if (std::is_same<T, std::string>::value)
            {
                data_type = DT_TEXT;
            }
            if (std::is_same<T, float>::value)
            {
                data_type = DT_REAL;
            }
        }
        ~field_priv() = default;
        
        void commit(T data);
        
        enum DATA_TYPES
        {
            DT_TEXT,
            DT_INT,
            DT_REAL
        };
    private:
        bool did_commit;
        T data;
        DATA_TYPES data_type = DT_INT;
    };
    
    template<typename T> class field;
    template <> class field<std::string> : public field_priv<std::string> {};
    template <> class field<int> : public field_priv<int> {};
    template <> class field<float> : public field_priv<float>{};
}
}

#endif /* Field_hpp */
