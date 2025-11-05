#include <iostream>
using namespace std;
class A
{
	int a;
	int b;
	public:
	A(int x,int y):a(x),b(y){};
	void display()
	{
		cout<<a<<" "<<b<<endl;
	}
};
void f(A obj)
{
	obj.display();
}
int main()
{
	f({1,2});
	return 0;
}
