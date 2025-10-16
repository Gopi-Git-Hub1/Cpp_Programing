#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
void findDuplicates(string str)
{
	unordered_map<char,int>freq;
	for(int i=0;i<str.length();i++)
	{
		if(str[i] != ' ')
		freq[str[i]]++;
	}
	bool found = false;
	for(auto c:freq)
	{
		if(c.second > 1)
		{
			cout<<c.first<<" ";
			found = true;
		}
	}
	if(!found)
	{
		cout<<"Not found";
	}
	cout<<endl;

}
int main()
{
	string st = "Programing";
	findDuplicates(st);
	return 0;
}
