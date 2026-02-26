#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;
bool isAnagram(string str1, string str2)
{
	int len1 = str1.length();
	int len2 = str2.length();
	if(len1 != len2)
		return false;
	transform(str1.begin(),str1.end(),str1.begin(), [](unsigned char c){ return tolower(c);});
	transform(str2.begin(),str2.end(),str2.begin(), [](unsigned char c){ return tolower(c);});
	sort(str1.begin(),str1.end());
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());

	return str1 == str2;

}
int main()
{
	string str1;
	string str2;
	cout<<"enter string 1: ";
	cin>>str1;
	cout<<"enter string 2: ";
	cin>>str2;
	if(isAnagram(str1,str2))
	{
		cout<<"str1: "<<str1<<" and str2:"<<str2<<" are Anagrams."<<endl;
	}
	else
	{
		cout<<"str1: "<<str1<<" and str2:"<<str2<<" are not Anagrams."<<endl;
	}
}
