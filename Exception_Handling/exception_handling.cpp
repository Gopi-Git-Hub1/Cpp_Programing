#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name = "Exception";
	try{
		cout<<"Name :";
		getline(cin, name);
		throw name;
	}catch(string s)
	{
	cout<<"Name : "<<s<<endl;
	}

	return 0;
}
