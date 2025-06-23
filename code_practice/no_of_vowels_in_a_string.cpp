#include <iostream>
using namespace std;
int isVowel(char ch)
{
	string str = "aeiouAEIOU";
	return (str.find(ch) != string::npos);
}
int main()
{
	string str;
	int vowel = 0;
	int consonent = 0;
	int alpha = 0;
	cout<<"Enter the string : ";
	getline(cin,str);
	for(auto ch:str)
		if(isalpha(ch))
			if(isVowel(ch))
				vowel++;
			else
				consonent++;
		else
			alpha++;
	cout<<str<<" having "<<vowel<<" Vowels."<<endl; 
	cout<<str<<" having "<<consonent<<" Consonents."<<endl; 
	cout<<str<<" having "<<alpha<<" Not Alphabets."<<endl; 
	return 0;
}
