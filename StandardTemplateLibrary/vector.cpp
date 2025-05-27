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
	for(int j =0;j<5;j++){
		cout<<var[j]<<" ";
	}
	cout<<endl;

	return 0;
}
