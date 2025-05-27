#include <iostream>
#include <list>
using namespace std;
int main()
{
	list<int>L;
	L.push_back(10);
	L.push_front(5);
	for(list<int>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	list<char>L1={'A','X','C','Y','B','Z'};
	for(char ch :L1)
	{
		cout<<ch<<" ";
	}
	cout<<endl;
	L1.pop_back();
	L1.pop_front();
	for(list<char>::iterator it = L1.begin(); it != L1.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	return 0;
}
