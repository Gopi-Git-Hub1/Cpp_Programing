#include <iostream>
#include <stdexcept>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

int main() {
    try {
        sql::mysql::MySQL_Driver *driver;
        sql::Connection *con;
        sql::Statement *stmt;
        sql::PreparedStatement *pstmt;

        // Step 1: Connect as root
        driver = sql::mysql::get_mysql_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "root", "Hanuman@8642");

        stmt = con->createStatement();

        // Step 2: Create user if not exists
        stmt->execute("CREATE USER IF NOT EXISTS 'gopi'@'localhost' IDENTIFIED BY 'Hanuman@8642'");

        // Step 3: Create database if not exists
        stmt->execute("CREATE DATABASE IF NOT EXISTS student_db");

        // Step 4: Grant privileges
        stmt->execute("GRANT ALL PRIVILEGES ON student_db.* TO 'gopi'@'localhost'");
        stmt->execute("FLUSH PRIVILEGES");

        // Step 5: Switch to testdb
        con->setSchema("student_db");

        // Step 6: Create students table if not exists
        stmt->execute("CREATE TABLE IF NOT EXISTS students (id INT PRIMARY KEY, name VARCHAR(100))");

        // Step 7: Insert student data
        pstmt = con->prepareStatement("INSERT INTO students(id, name) VALUES (?, ?)");

        int student_id;
        std::string student_name;

        std::cout << "Enter student ID: ";
        std::cin >> student_id;
        std::cin.ignore(); // Clear newline
        std::cout << "Enter student name: ";
        std::getline(std::cin, student_name);

        pstmt->setInt(1, student_id);
        pstmt->setString(2, student_name);
        pstmt->execute();

        std::cout << "Student data inserted successfully.\n";

        // Cleanup
        delete pstmt;
        delete stmt;
        delete con;

    } catch (sql::SQLException &e) {
        std::cerr << "SQL Error: " << e.what() << std::endl;
    }

    return 0;
}

