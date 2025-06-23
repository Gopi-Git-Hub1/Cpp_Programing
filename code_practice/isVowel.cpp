#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int isVowel(char ch)
{
	string str = "aeiouAEIOU";
	return (str.find(ch) != string::npos);
}
int main()
{
	char ch;
	cout<<"Enter the char : ";
	cin>>ch;
	if(isalpha(ch))
		if(isVowel(ch))
			cout<<ch<<" is a Vowel."<<endl;
		else
			cout<<ch<<" is a Consonant."<<endl;
	else

		cout<<ch<<" is not an alphabet."<<endl;

	return 0;
}
