#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
using namespace std;
int main()
{
	string str1,str2;
	cout<<"Enter string 1 : ";
	getline(cin,str1);
	cout<<"Enter string 2 : ";
	getline(cin,str2);
	str1.append(str2);
	cout<<"Concatenated String : "<<str1<<endl;

	char S1[50], S2[50];
	cout << "Enter string 1 : ";
	cin>>S1;
	cout << "Enter string 2 : ";
	cin>>S2;
	strcat(S1, S2);
	cout << "Concatenated String : " << S1<<endl;

	string st1, st2;
	
	cin.ignore();	

	cout << "Enter string 1: ";
	getline(cin,st1);
	cout << "Enter string 2: ";
	getline(cin,st2);
	string concatenatedString = st1 + st2;
	cout << "Concatenated String : " << concatenatedString<<endl;
	
    	//Using for Loop
	string s1,s2;	
	cout << "Enter string 1: ";
	getline(cin,s1);
	cout << "Enter string 2: ";
	getline(cin,s2);
	for(auto i:s2)
	{
		s1 += i;
	}
	cout << "Concatenated String : " <<s1<<endl;
	return 0;
}
