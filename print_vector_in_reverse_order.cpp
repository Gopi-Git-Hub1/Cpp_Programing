#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int>V = {1,2,3,4,5};
	int n = V.size();
	for(vector<int>::iterator it = V.end() -1; it >= V.begin(); it--)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	return 0;
}
