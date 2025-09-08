#include <iostream>
#include <array>
using namespace std;
int main()
{
	array<int,5>arr1{{1,2,3,4,5}};
	array<int,5>arr2 = {10,20,30,40,50};
	array<string, 2>arr3={"Gopi","VenkataLakshmi"};
	cout<<"arr1 size : "<<arr1.size()<<endl;
	cout<<"arr2 size : "<<arr2.size()<<endl;
	cout<<"arr3 size : "<<arr3.size()<<endl;
	for(auto i:arr1)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	for(auto i:arr2)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	for(auto i:arr3)
	{
		cout<<i<<" ";
	}
	cout<<endl;

	return 0;
}
