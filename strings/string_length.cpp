#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	cout<<"Using string::size"<<endl;

	string S;
	cout<<"enter the string : ";
	getline(cin,S);
	int len = S.size();
	cout<<"String : "<<S<<endl<<"Size : "<<len<<endl;
	
	cout<<"Using string::length"<<endl;
	
	string S1;
	cout<<"enter the string : ";
	getline(cin,S1);
	int le = S1.length();
	cout<<"String : "<<S1<<endl<<"Size : "<<le<<endl;
	
	cout<<"Using strlen() Method"<<endl;
	
	string S2;
	cout<<"enter the string : ";
	getline(cin,S2);
	int l = strlen(S2.c_str());
	cout<<"String : "<<S2<<endl<<"Size : "<<l<<endl;
	
	cout<<"Using a while loop"<<endl;
	
	string S3;
	cout<<"enter the string : ";
	getline(cin,S3);
	int i = 0;
	while(S3[i]!='\0')
	{
		i++;
	}
	cout<<"String : "<<S3<<endl<<"Size : "<<i<<endl;
	
	cout<<"Using Loop"<<endl;
	
	string S4;
	cout<<"enter the string : ";
	getline(cin,S4);
	for(int i = 0; S4[i]!='\0';i++);
	cout<<"String : "<<S4<<endl<<"Size : "<<i<<endl;
	
	return 0;
}
