#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string S,sub;
	cout<<"enter the string : ";
	getline(cin,S);
	cout<<"enter the sub string : ";
	getline(cin,sub);
	int fpos = S.find(sub);
	cout<<"String : "<<S<<endl<<"sub string find position : "<<fpos<<endl; 
	
	string S1,sub1;
	cout<<"enter the string : ";
	getline(cin,S1);
	cout<<"enter the sub string : ";
	getline(cin,sub1);
	int fpos1 = S1.find(sub1);
	if(fpos1 != string::npos)
	cout<<"String : "<<S1<<" sub string find position : "<<fpos1<<endl;
	else
	cout<<sub1<<" NOT found."<<endl;

	cout<<"Find Multiple Occurrences of a Substring"<<endl;

	string S2,sub2;
	cout<<"enter the string : ";
	getline(cin,S2);
	cout<<"enter the sub string : ";
	getline(cin,sub2);
	int res = -1;
	cout<<"String : "<<S2<<endl;
	cout<<"Sub String : "<<sub2<<endl;
	while((res = S2.find(sub2, res + 1)) != string::npos)
	{
		cout<<res<<" ";
	}
	cout<<endl;


	cout<<"Find All the Occurrences of a Character"<<endl;

	string S3;
	char ch;
	cout<<"enter the string : ";
	getline(cin,S3);
	cout<<"enter the char.. : ";
	cin>>ch;
	int fpos2 = -1;
	cout<<"String : "<<S3<<endl;
	cout<<"Char.. : "<<ch<<endl;
	while((fpos2 = S3.find(ch, fpos2 + 1)) != string::npos)
	{
		cout<<fpos2<<" ";
	}
	cout<<endl;
	
	cout<<"Find Occurrence of a Partial Substring"<<endl;

	cin.ignore();

	string S4, str;
	char *sub3;
	int sIndex;
	int eIndex;
	int fpos3;
	cout<<"enter the string : ";
	getline(cin,S4);
	cout<<"enter the sub string : ";
	getline(cin,str);
	sub3 = (char*)malloc(S4.length());
	strcpy(sub3, str.c_str());
	cout<<"enter start = 0 and end index of sub string : ";
	cin>>sIndex>>eIndex;
	cout<<"String : "<<S4<<endl;
	cout<<"Sub String : "<<sub3<<endl;
	cout<<"sIndex = "<<sIndex<<endl;
	cout<<"eIndex = "<<eIndex<<endl;
	fpos3 = S4.find(sub3, sIndex, eIndex);
	if(fpos3 != string::npos)
		cout<<fpos3<<" ";
	else
		cout<<fpos3<<" NOT found."<<endl;
	
	cout<<endl;
	
	return 0;
}
