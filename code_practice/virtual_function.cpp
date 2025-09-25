#include <iostream>
#include <memory>
using namespace std;
class Base
{
	public:
		Base()
		{
			cout<<"Base Constructor"<<endl;
		}
		// ~Base()
		virtual ~Base()
		{
			cout<<"Base Destructor"<<endl;
		}
		//void func()
		virtual void func()
		{
			cout<<"Base function operation"<<endl;
		}
};
class Derived : public Base
{
	public:
		Derived()
		{
			cout<<"Derived Constructor"<<endl;
		}
		~Derived()
		{
			cout<<"Derived Destructor"<<endl;
		}
		void func()
		{
			cout<<"Derived function operation"<<endl;
		}
};
int main()
{
	//class Base *bptr = new Derived();
	unique_ptr<Base>bptr(new Derived);
	bptr->func();
	//delete bptr;
	
	//int *ptr = new int(100);
	unique_ptr<int>ptr=make_unique<int>(100);
	cout<<"ptr : "<<*ptr<<endl;
        //delete ptr;
	return 0;
}
