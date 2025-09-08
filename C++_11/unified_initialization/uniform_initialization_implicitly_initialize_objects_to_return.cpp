#include <iostream>
using namespace std;
class A
{
	public:
		int a;
		int b;
	A(int x, int y):a(x),b(y){};	
	void show()
	{
		cout<<"a : "<<a<<" "<<"b : "<<b<<endl;
	}	

};
A f(int x, int y)
{
	return {x,y};
}
int main()
{
	class A obj = f(10,20);
	obj.show();
	return 0;
}
