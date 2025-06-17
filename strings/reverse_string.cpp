#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
void reverseString(char *s)
{
	char ch,*sptr,*eptr;
	int len = strlen(s);
	sptr = s;
	eptr = s + len - 1;
	for(int i =0 ; i<len/2;i++)
	{
		ch     = *sptr;
		*sptr  = *eptr;
	        *eptr  = ch;
		*sptr++;
		*eptr--;
	}
}

int main()
{
	char *str;
	string s;
	cout<<"Enter the String : ";
	getline(cin,s);
	str = (char*)malloc(sizeof(s));
	strcpy(str, s.c_str());
	cout<<"Normal String    : "<<str<<endl;
	reverseString(str);
	cout<<"Reverse String   : "<<str<<endl;
	return 0;
}

