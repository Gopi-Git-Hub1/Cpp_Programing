// C++ program to demonstrate initialization
// of dynamic array in C++ using uniform initialization

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int *ptr = new int[5]{1,2,3,4,5};
	for(int i =0; i < 5; i++)
	{
		cout<<*(ptr+i)<<" ";
	}
	cout<<endl;
	delete[] ptr;
}

