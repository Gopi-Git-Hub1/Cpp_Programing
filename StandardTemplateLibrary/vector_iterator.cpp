#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int>var;
	cout<<"size : "<<sizeof(var)<<endl;
	for(int i =0;i<5;i++){
	var.push_back(i);
	}
	for(vector<int>::iterator it = var.begin() ; it != var.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	return 0;
}
