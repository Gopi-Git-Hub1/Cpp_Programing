#include <iostream>
using namespace std;
int *func()
{
	// int a = 5;
	// return &a;
int *a = new int(5);
	return a;
}
int main()
{
	int *ptr = func();
	cout<<*ptr<<endl;
	delete ptr;
	return 0;
}
