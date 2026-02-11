#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int>V={2,5,7,8,10,15};
	int target = 9;
	for(int i =0;i<V.size();i++)
	{
		for(int j = i+1; j<V.size();j++)
		{
			if(V[i]+V[j]==target)
			{
				cout<<"[ "<<i<<", "<<j-1<<" ]"<<endl;
			}
		}
	}
}
