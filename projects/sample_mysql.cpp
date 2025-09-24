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
        sql::PreparedStatement *pstmt;

        // Connect to the MySQL database
        driver = sql::mysql::get_mysql_driver_instance();
	con = driver->connect("tcp://127.0.0.1:3306", "gopi", "Hanuman@8642");
	con->setSchema("testdb");

        // Prepare and execute the INSERT statement
        pstmt = con->prepareStatement("INSERT INTO students(id, name) VALUES (?, ?)");
        int student_id;
        std::string student_name;

        std::cout << "Enter student ID: ";
        std::cin >> student_id;
        std::cin.ignore(); // Clear newline from input buffer
        std::cout << "Enter student name: ";
        std::getline(std::cin, student_name);

        pstmt->setInt(1, student_id);
        pstmt->setString(2, student_name);
        pstmt->execute();

        std::cout << "Student details inserted successfully!" << std::endl;

        delete pstmt;
        delete con;
    } catch (sql::SQLException &e) {
        std::cerr << "SQL error: " << e.what() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}

