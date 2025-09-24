#include <iostream>
#include <map>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
using namespace std;

map<string, string> Credentials;

class userCredentials
{
	public:
		string username;
		string password;

		bool isPasswordStrong(const string& pwd);
		void inputCredentials(bool validatePassword = true);
		void registerUser(sql::Connection* conn);
		void loginUser(sql::Connection* conn);
		void changePassword(sql::Connection* conn);
		void displayCredentials();
		void displayDatabaseCredentials(sql::Connection* conn);
};

void userCredentials::displayDatabaseCredentials(sql::Connection* conn) {
	try {
		conn->setSchema("login_and_registration_mysql_db");

		sql::Statement* stmt = conn->createStatement();
		sql::ResultSet* res = stmt->executeQuery("SELECT username, password FROM users");

		cout<<"================================="<<endl;
		cout << "+----------+-----------------+\n";
		cout << "| username | password        |\n";
		cout << "+----------+-----------------+\n";
		while (res->next()) {
			cout << "| " << left << setw(8) << res->getString("username")
				<< " | " << left << setw(15) << res->getString("password") << " |\n";
		}
		cout << "+----------+-----------------+\n";
		cout<<"================================="<<endl;

		delete res;
		delete stmt;
	} catch (sql::SQLException& e) {
		cerr << "SQL error: " << e.what() << endl;
	}
}
void userCredentials::changePassword(sql::Connection* conn)
{
	//userCredentials currentUser;
	unique_ptr<userCredentials> currentUser = make_unique<userCredentials>();
	currentUser->inputCredentials(true);

	conn->setSchema("login_and_registration_mysql_db");
	// Step 1: Verify current credentials from DB
	unique_ptr<sql::PreparedStatement> pstmt(conn->prepareStatement("SELECT password FROM users WHERE username = ?"));
	pstmt->setString(1, currentUser->username);
	unique_ptr<sql::ResultSet> res(pstmt->executeQuery());

	// Verify user credentials
	if (Credentials.find(currentUser->username) != Credentials.end()) {
		if (Credentials[currentUser->username] == currentUser->password) {
			string newPassword,confirmPassword;
			cout << "Enter new password: ";
			cin >> newPassword;
			// Validate new password strength
			while (!currentUser->isPasswordStrong(newPassword)) {
				cout << "Password must be at least 8 characters long and include:"<<endl;
				cout << "- At least one uppercase letter"<<endl;
				cout << "- At least one lowercase letter"<<endl;
				cout << "- At least one digit"<<endl;
				cout << "- At least one special character (!@#$%^&*)"<<endl;
				cout << "Enter a strong password: ";
				cin >> newPassword;
			}
			// Ask for confirmation
			cout << "Re-enter new password to confirm: ";
			cin >> confirmPassword;
			if (newPassword != confirmPassword) {
				cout << "Passwords do not match. Password change failed."<<endl;
				return;
			}
			// Update password in map
			Credentials[currentUser->username] = newPassword;
			// Update password in DB
			pstmt.reset(conn->prepareStatement(
						"UPDATE users SET password = ? WHERE username = ?"));
			pstmt->setString(1, newPassword);
			pstmt->setString(2, currentUser->username);
			pstmt->executeUpdate();

			cout << "Password changed successfully."<<endl; 
		}
		else
		{
			cout << "Incorrect current password."<<endl;
		}
	}
	/*else if (res->next()) {
	  string storedPassword = res->getString("password");
	  if (storedPassword == currentUser.password) {
	// Step 2: Ask for new password
	string newPassword, confirmPassword;
	cout << "Enter new password: ";
	cin >> newPassword;

	// Step 3: Validate password strength
	while (!isPasswordStrong(newPassword)) {
	cout << "Password must be at least 8 characters long and include:\n"
	<< "- At least one uppercase letter\n"
	<< "- At least one lowercase letter\n"
	<< "- At least one digit\n"
	<< "- At least one special character (!@#$%^&*)\n"
	<< "Enter a strong password: ";
	cin >> newPassword;
	}

	// Step 4: Confirm password
	cout << "Re-enter new password to confirm: ";
	cin >> confirmPassword;

	if (newPassword == confirmPassword) {
	// Step 5: Update password in DB
	pstmt.reset(conn->prepareStatement(
	"UPDATE users SET password = ? WHERE username = ?"));
	pstmt->setString(1, newPassword);
	pstmt->setString(2, currentUser.username);
	pstmt->executeUpdate();

	cout << "Password changed successfully.\n";
	} else {
	cout << "Passwords do not match. Password change failed.\n";
	}
	} else {
	cout << "Incorrect current password.\n";
	}
	}*/
	else
	{
		cout << "User not found."<<endl;
	}

}
void userCredentials::displayCredentials()
{
	cout<<"================================="<<endl;
	cout << "+----------+-----------------+\n";
	cout << "| username | password        |\n";
	cout << "+----------+-----------------+\n";
	for(auto it:Credentials)
	{
		//cout<<"User Name: "<<it.first<<endl;
		//cout<<"Password : "<<it.second<<endl;
		cout << "| " << left << setw(8) << it.first
			<< " | " << left << setw(15) << it.second << " |\n";
	}
	cout << "+----------+-----------------+\n";
	cout<<"================================="<<endl;
}
bool userCredentials::isPasswordStrong(const string& pwd) {
	if (pwd.length() < 8) return false;

	bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
	for (char ch : pwd) {
		if (isupper(ch)) hasUpper = true;
		else if (islower(ch)) hasLower = true;
		else if (isdigit(ch)) hasDigit = true;
		else if (ispunct(ch)) hasSpecial = true;
	}

	return hasUpper && hasLower && hasDigit && hasSpecial;
}

void userCredentials::inputCredentials(bool validatePassword)
{

	cout << "Enter username: ";
	//cin.ignore();
	//getline(cin, username);
	cin >> username;
	cout << "Enter password: ";
	cin >> password;
	if(validatePassword)
	{
		while (!isPasswordStrong(password)) {
			cout << "Password must be at least 8 characters long and include:"<<endl;
			cout << "- At least one uppercase letter"<<endl;
			cout << "- At least one lowercase letter"<<endl;
			cout << "- At least one digit"<<endl;
			cout << "- At least one special character (!@#$%^&*)"<<endl;
			cout << "Enter a strong password: ";
			cin >> password;
		}

	}
}
void userCredentials::registerUser(sql::Connection* conn)
{

	//userCredentials newUser;
	unique_ptr<userCredentials> newUser = make_unique<userCredentials>();
	newUser->inputCredentials(true);

	conn->setSchema("login_and_registration_mysql_db");
	// Check if user already exists in DB
	unique_ptr<sql::PreparedStatement> checkStmt(conn->prepareStatement("SELECT username FROM users WHERE username = ?"));
	checkStmt->setString(1, newUser->username);
	unique_ptr<sql::ResultSet> res(checkStmt->executeQuery());

	// Check if user already exists in map and  DB
	if (Credentials.find(newUser->username) != Credentials.end()) {
		cout << "Username already exists in List. Try a different one."<<endl;
		return;
	}
	if(res->next())
	{
		cout << "Username already exists in DB. Try a different one."<<endl;
		return;
	}

	// Store in map only (no file writing)
	Credentials[newUser->username] = newUser->password;
	// Insert new user into DB
	unique_ptr<sql::PreparedStatement> insertStmt(conn->prepareStatement("INSERT INTO users (username, password) VALUES (?, ?)"));
	insertStmt->setString(1, newUser->username);
	insertStmt->setString(2, newUser->password);
	insertStmt->executeUpdate();

	cout << "User registered successfully (stored in memory)."<<endl;

}
void userCredentials::loginUser(sql::Connection* conn)
{
	//userCredentials loginUser;
	unique_ptr<userCredentials> loginUser = make_unique<userCredentials>();
	loginUser->inputCredentials(false);

	conn->setSchema("login_and_registration_mysql_db");
	// Prepare SQL query to fetch password for the given username
	unique_ptr<sql::PreparedStatement> pstmt(conn->prepareStatement(
				"SELECT password FROM users WHERE username = ?"));
	pstmt->setString(1, loginUser->username);
	unique_ptr<sql::ResultSet> res(pstmt->executeQuery());

	// Check if username exists in the map
	if (Credentials.find(loginUser->username) != Credentials.end()) {
		if (Credentials[loginUser->username] == loginUser->password) {
			cout << "Login successful!"<<endl;
		} 
		else 
		{
			cout << "Invalid password."<<endl;
		}
	}
	else 
	{
		cout << "User not found."<<endl;
	}
	// Check if username exists in the DB
	if(res->next())
	{
		string storedPassword = res->getString("password");
		if (storedPassword == loginUser->password) {
			cout << "Login successful!" << endl;
		} else {
			cout << "Invalid password." << endl;
		}
	}
	else 
	{
		cout << "User not found."<<endl;
	}

}
int main()
{
	int choice;
	bool running = true;
	//class userCredentials User;
        unique_ptr<userCredentials> User = make_unique<userCredentials>();


	try {
		sql::mysql::MySQL_Driver *driver = nullptr;
		sql::Connection *con = nullptr;
		sql::Statement *stmt = nullptr;
		sql::PreparedStatement *pstmt = nullptr;

		sql::ResultSet* res = nullptr;
		

		// Step 1: Connect as root
		driver = sql::mysql::get_mysql_driver_instance();
		con = driver->connect("tcp://127.0.0.1:3306", "root", "Hanuman@8642");

		stmt = con->createStatement();

		// Step 2: Create user if not exists
		stmt->execute("CREATE USER IF NOT EXISTS 'gopi'@'localhost' IDENTIFIED BY 'Hanuman@8642'");

		// Step 3: Create database if not exists
		stmt->execute("CREATE DATABASE IF NOT EXISTS login_and_registration_mysql_db");

		// Step 4: Grant privileges
		stmt->execute("GRANT ALL PRIVILEGES ON login_and_registration_mysql_db.* TO 'gopi'@'localhost'");
		stmt->execute("FLUSH PRIVILEGES");

		// Step 5: Switch to login_and_registration_mysql_db
		con->setSchema("login_and_registration_mysql_db");

		// Step 6: Create users table if not exists
		stmt->execute("CREATE TABLE IF NOT EXISTS users (username VARCHAR(50) PRIMARY KEY, password VARCHAR(100))");

		// Step 7: Store DataBase data into list
		res = stmt->executeQuery("SELECT username, password FROM users");
		while (res->next()) {
			User->username = res->getString("username");
			User->password = res->getString("password");
			// Store in map only (no file writing)
			Credentials[User->username] = User->password;
		}


		while(running)
		{

			cout<<"1. Register User."<<endl;
			cout<<"2. Login User."<<endl;
			cout<<"3. Display MAP Credentials."<<endl;
			cout<<"4. Change Password."<<endl;
			cout<<"5. Display Database Credentials."<<endl;
			cout<<"6. Exit."<<endl;
			cout<<"Enter your choice: ";
			cin >> choice;
			switch(choice)
			{
				case 1:
					User->registerUser(con);
					break;
				case 2: 
					User->loginUser(con);
					break;
				case 3:
					User->displayCredentials();
					break;
				case 4:
					User->changePassword(con);
					break;
				case 5:
					User->displayDatabaseCredentials(con);
					break;	
				case 6:	
					running = false;
					break;
				default:
					cout << "Invalid choice."<<endl;		
			}

		}
		if (res)    { delete res;    res = nullptr; }
		if (stmt)   { delete stmt;   stmt = nullptr; }
		if (pstmt)  { delete pstmt;  pstmt = nullptr; }
		if (con)    { delete con;    con = nullptr; }
		// Do NOT delete driver if you got it from get_mysql_driver_instance()
		
	} catch (sql::SQLException& e) {
		cerr << "SQL Error: " << e.what() << endl;
	}

	return 0;
}
