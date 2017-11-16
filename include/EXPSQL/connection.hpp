//
//  connection.hpp
//  EXPSQL
//
//  Created by Nick Fagan on 11/15/17.
//

#ifndef connection_hpp
#define connection_hpp

#include <string>

namespace EXP {
namespace sql {
    class sqlite3;
    class connection
    {
    public:
        connection();
        ~connection();
        
        void open(std::string file);
    private:
        sqlite3 *db;
        std::string file;
        bool is_open;
    };
}
}

#endif /* connection_hpp */
