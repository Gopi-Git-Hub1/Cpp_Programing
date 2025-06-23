#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string str;
	cout<<"Enter the string : ";
	getline(cin,str);
	cout<<"Normal String : "<<str<<endl;
	for(int i = 0; str[i] != '\0'; i++)
		if(islower(str[i]))
			str[i] = toupper(str[i]);
		else if(isupper(str[i]))
			str[i] = tolower(str[i]);
	cout<<"Toggle String : "<<str<<endl;
	return 0;
}
