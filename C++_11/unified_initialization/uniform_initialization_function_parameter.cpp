#include <iostream>
using namespace std;
// C++ program to demonstrate how to
// initialize a function parameter
// using Uniform Initialization
class A
{
	public:
		int a;
		int b;
		A(int x,int y):a(x),b(y){};
		void show()
		{
			cout<<"a : "<<a<<" "<<"b : "<<b<<endl;
		}
};
void f(A obj)
{
	obj.show();
}
int main()
{
	// calling function and initializing it's argument
	// using brace initialization
	f({10,20});
	return 0;
}
