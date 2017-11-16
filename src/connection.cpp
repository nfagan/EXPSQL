//
//  connection.cpp
//  EXPSQL
//
//  Created by Nick Fagan on 11/15/17.
//

#include <EXPSQL/connection.hpp>
#include <sqlite3/sqlite3.h>
#include <EXPUtil/assert/EXP_ASSERT.h>

EXP::sql::connection::connection()
{
    EXP_ASSERT(false, "error");
    is_open = false;
}

EXP::sql::connection::~connection()
{
    
}

void EXP::sql::connection::open(std::string file)
{
    EXP_ASSERT(false, "error");
    this->file = file;
}
