#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void relationalOperation(string s1, string s2)
{
	if(s1 != s2)
		cout << s1 << " is not equal to " << s2 << endl;
	else if(s1 > s2)
		cout << s1 << " is greater than " << s2 << endl;
	else if(s1 < s2)
		cout << s2 << " is greater than " << s1 << endl;
	else if(s1 == s2)
		cout << s1 << " is equal to " << s2 << endl;

}
void compareFunction(string s1, string s2)
{
	int comp = s1.compare(s2);
	if(comp != 0)
		cout << s1 << " is not equal to " << s2 << endl;
	else if(comp > 0)
		cout << s1 << " is greater than " << s2 << endl;
	else if(comp < 0)
		cout << s2 << " is greater than " << s1 << endl;
	else if(comp == 0)
		cout << s1 << " is equal to " << s2 << endl;

}
int main()
{
	cout<<"Using Relational operators"<<endl;

	string S1,S2;
	cout<<"Enter string 1 : ";
	getline(cin,S1);
	cout<<"Enter string 2 : ";
	getline(cin,S2);
	relationalOperation(S1,S2);

	cout<<"std:: Compare()"<<endl;

	string S3,S4;
	cout<<"Enter string 1 : ";
	getline(cin,S3);
	cout<<"Enter string 2 : ";
	getline(cin,S4);
	compareFunction(S3,S4);

	return 0;
}
