#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int>v = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
	cout<<"Odd  : ";
	for(int odd : v){
		if(odd % 2 == 1)
			cout<<odd<<" ";
	}
	cout<<endl;
	cout<<"Even : ";
	for(int even : v){
		if(even%2 == 0)
			cout<<even<<" ";
	}
	cout<<endl;

	return 0;
}
