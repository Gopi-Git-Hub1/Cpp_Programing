#include <iostream>
using namespace std;
class A
{
	int a;
	int b;
	public:
	A (int x, int y):a(x),b(y){};
	void display()
	{
		cout<<a<<" "<<b<<endl;
	}
};
A f(int x,int y)
{
	return {x,y};
}
int main()
{
	class A obj = f(1,2);
	obj.display();
	return 0;
}
