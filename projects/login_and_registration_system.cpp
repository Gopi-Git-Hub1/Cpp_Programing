#include <iostream>
#include <map>
#include <string>
using namespace std;

map<string, string> Credentials;

class userCredentials
{
	public:
		string username;
		string password;

		bool isPasswordStrong(const string& pwd);
		void inputCredentials(bool validatePassword = true);
		void registerUser();
		void loginUser();
		void changePassword();
		void displayCredentials();
};
void userCredentials::changePassword()
{
	userCredentials currentUser;
	currentUser.inputCredentials(true);
	// Verify user credentials
	if (Credentials.find(currentUser.username) != Credentials.end()) {
		if (Credentials[currentUser.username] == currentUser.password) {
			string newPassword,confirmPassword;
			cout << "Enter new password: ";
			cin >> newPassword;
			// Validate new password strength
			while (!currentUser.isPasswordStrong(newPassword)) {
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
			Credentials[currentUser.username] = newPassword;
			cout << "Password changed successfully."<<endl;

		}
		else
		{
			cout << "Incorrect current password."<<endl;
		}
	}
	else
	{
		cout << "User not found."<<endl;
	}


}
void userCredentials::displayCredentials()
{
	cout<<"================================="<<endl;
	for(auto it:Credentials)
	{
		cout<<"User Name: "<<it.first<<endl;
		cout<<"Password : "<<it.second<<endl;
	}
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
void userCredentials::registerUser()
{

	userCredentials newUser;
	newUser.inputCredentials(true);

	// Check if user already exists in map
	if (Credentials.find(newUser.username) != Credentials.end()) {
		cout << "Username already exists. Try a different one."<<endl;
		return;
	}

	// Store in map only (no file writing)
	Credentials[newUser.username] = newUser.password;
	cout << "User registered successfully (stored in memory)."<<endl;

}
void userCredentials::loginUser()
{

	userCredentials loginUser;
	loginUser.inputCredentials(false);

	// Check if username exists in the map
	if (Credentials.find(loginUser.username) != Credentials.end()) {
		if (Credentials[loginUser.username] == loginUser.password) {
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

}
int main()
{
	int choice;
	class userCredentials User;
	while(1)
	{

		cout<<"1. Register User."<<endl;
		cout<<"2. Login User."<<endl;
		cout<<"3. Display Credentials List."<<endl;
		cout<<"4. Change Password."<<endl;
		cout<<"5. Exit."<<endl;
		cout<<"Enter your choice: ";
		cin >> choice;
		switch(choice)
		{
			case 1:
				User.registerUser();
				break;
			case 2: 
				User.loginUser();
				break;
			case 3:
				User.displayCredentials();
				break;
			case 4:
				User.changePassword();
				break;	
			case 5:	
				exit(0);
			default:
				cout << "Invalid choice."<<endl;		
		}

	}
	return 0;
}
