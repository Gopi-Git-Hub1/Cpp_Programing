#include <iostream>
using namespace std;
int main()
{
	string str;
	string str1 ="";
	cout<<"Enter the string : ";
	getline(cin,str);
	for(auto ch:str)
		if(ch != ' ')
			str1 += ch;
	cout<<"Normal String : "<<str<<endl;
	cout<<"Remove Spaces From a String : "<<str1<<endl;
}
