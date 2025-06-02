#include <iostream>
using namespace std;
class A{
	public:
		string name;
		A():name("Inline function"){};
		inline void fun()
		{
		cout<<"name : "<<name<<endl;
		}
		inline void display();
};
inline void A::display()
{
	cout<<"name : "<<"Inline function"<<endl;
}
int main()
{
	class A obj;
	obj.fun();
	obj.display();
	return 0;
}
