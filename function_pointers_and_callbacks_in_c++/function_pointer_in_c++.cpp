
// The function pointer is used to point functions, similarly, the pointers are used to point variables.
// It is utilized to save a function's address.
// The function pointer is either used to call the function or it can be sent as an argument to another function.

#include <iostream>
using namespace std;
int multiply(int x, int y)
{
	return x*y;
}
int main()
{
	int (*ptr)(int,int);
	ptr = multiply;
	int res = ptr(3,5);
	cout<<"res : "<<res<<endl;
	return 0;
}
