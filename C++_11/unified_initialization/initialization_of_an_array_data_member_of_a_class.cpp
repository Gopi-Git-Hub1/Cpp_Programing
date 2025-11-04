#include <iostream>
using namespace std;
class A
{
	int arr[5];
	public:
	A(int a,int b,int c,int d,int e):arr{a,b,c,d,e}{};
	void display()
	{
		for(int i =0; i < 5; i++)
		{
			cout<<*(arr+i)<<" ";
		}
		cout<<endl;
	}
};
int main()
{
	class A obj(1,2,3,4,5);
	obj.display();
	return 0;
}
