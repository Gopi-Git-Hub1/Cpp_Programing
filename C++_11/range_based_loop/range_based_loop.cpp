#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int>V1={1,2,3,4,5};
	for(int i:V1)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	vector<int>V2= {5,4,3,2,1};
	for(auto a:V2)
	{
		cout<<a<<" ";
	}
	cout<<endl;
	return 0;
}
