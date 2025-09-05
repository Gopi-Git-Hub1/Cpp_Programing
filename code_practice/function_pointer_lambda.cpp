#include <iostream>
#include <functional>
using namespace std;
void function1(function<void(int)>fun)
{
	fun(30);
}
int fun(int s)
{
	return s*s;
}
void function2(int z,int (*ptr)(int))
{
	int s = ptr(z);
	cout<<"S : "<<s<<endl;
}
int main()
{
	int x =10;
	int y = 20;
	int (*z)(int);
	z=fun;
        cout<<"z : "<<z(x)<<endl;
	function<void(int)>func1 = [x](int a)->void{
		cout<<"x : "<<x<<" "<<"a : "<<a<<endl;
	};
	auto lambda1 = [x](int b)->void{
		cout<<"x : "<<x<<" "<<"b : "<<b<<endl;
	};

	func1(y);
	lambda1(y);
	function1(func1);
	function1(lambda1);
	function2(x,&fun);
	function2(y,&fun);
	return 0;
}
