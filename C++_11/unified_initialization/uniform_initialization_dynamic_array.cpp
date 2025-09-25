#include <iostream>
using namespace std;
// C++ program to demonstrate initialization
// of dynamic array in C++ using uniform initialization
int main()
{
	// declaring a dynamic array
	// and initializing using braces
	int *ptr = new int[5]{1,2,3,4,5};
	for(int i=0;i<5;i++)
	{
		cout<<*(ptr+i)<<" ";
	}
	cout<<endl;
	delete[] ptr;
	return 0;
}
