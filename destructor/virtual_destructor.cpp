#include <iostream>
using namespace std;
class base{

	public:
		base()
		{
			cout<<"Base class constructor"<<endl;
		}
	      virtual ~base()
		{
			cout<<"Base class destructor"<<endl;
		}
};
class derived : public base{

	public:
		derived()
		{
			cout<<"Derived class constructor"<<endl;
		}
		~derived()
		{
			cout<<"Derived class destructor"<<endl;
		}
};
int main()
{
	class base *Base = new derived();
       delete Base;	
	return 0;
}
