#include<iostream>
using namespace std;
int main()
{
	cout<<"substr() "<<endl;

	string S;
	int sIndex;
	int eIndex;
	cout<<"Enter the string : ";
	getline(cin,S);
	cout<<"Enter start index and end index of sub string : ";
	cin>>sIndex>>eIndex;
	string subStr = S.substr(sIndex,eIndex);
	cout<<"Normar string : "<<S<<endl;
	cout<<"sub string : "<<subStr<<endl;

	cout<<"Get a Sub-String after a Character"<<endl;

	cin.ignore();

	string S1;
	char ch;
	cout<<"Enter the string : ";
	getline(cin,S1);
	cout<<"Enter char :";
	cin>>ch;
	int pos = S1.find(ch);
	string subString = S1.substr(pos+1); 
	cout<<"Normar string : "<<S1<<endl;
	cout<<"sub string : "<<subString<<endl;
	
	cout<<"Get a SubString Before a Character"<<endl;

	cin.ignore();
	
	string S2;
	char c;
	cout<<"Enter the string : ";
	getline(cin,S2);
	cout<<"Enter char :";
	cin>>c;
	int p = S2.find(c);
	string subStri = S2.substr(0,pos); 
	cout<<"Normar string : "<<S2<<endl;
	cout<<"sub string : "<<subStri<<endl;
	
	cout<<"Print all Sub-Strings of a Given String"<<endl;

	cin.ignore();
	
	string S3;
	cout<<"Enter the string : ";
	getline(cin,S3); 
	cout<<"Normar string : "<<S3<<endl;
	int l = S3.length();
	for(int i = 0; i < l; i++)
	{
		for(int len = 1; len <= l - i;len++)
		{
		cout<<"Normar string : "<<S3<<endl<<"sub string : "<<S3.substr(i,len)<<endl;
		}
	}
	return 0;
}
