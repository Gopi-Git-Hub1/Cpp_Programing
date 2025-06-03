#include <iostream>
#include <functional>
using namespace std;
int main()
{
	int x = 1;
	int y = 2;
	auto A = [&]()-> int{
		x++;
		y++;
		cout<<"X : "<<x<<" "<<"Y : "<<y<<endl;
		return x+y;
	};
	int res = A();
	cout<<"sum of x and y is : "<<res<<endl;
	function<int(int,int)>fun = [&](int a, int b) -> int {
		cout<<"A : "<<a<<" "<<"B : "<<b<<endl;
		x++;
		y++;
		cout<<"X : "<<x<<" "<<"Y : "<<y<<endl;
		return a+b;

	};
int res1 = fun(10,20);
	cout<<"sum of a and b is : "<<res1<<endl;

	return 0;
}
