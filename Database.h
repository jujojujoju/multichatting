#ifndef MULTICHATTING_DATABASE_H
#define MULTICHATTING_DATABASE_H

#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

class Database{
private:
    sql::Driver *driver;
    sql::Connection *con;
    sql::Statement *stmt;
    sql::ResultSet *res;
    sql::PreparedStatement *pstmt;

public:
    sql::Driver * getDriver();
    sql::Connection * getConnection();
    std::string isLogin(const std::string &string, const std::string &basic_string);

};

#endif //MULTICHATTING_DATABASE_H
