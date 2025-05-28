#include <iostream>
using namespace std;
class copy_constructor
{
	public:
		int x;
		copy_constructor(){};
		copy_constructor(copy_constructor & A)
		{
			x = A.x;
		}
		void display()
		{
			cout<<x<<endl;
		}
};
int main()
{
	class copy_constructor obj1;
	obj1.x = 20;
	obj1.display();
	class copy_constructor obj2(obj1);
	obj2.display();
	return 0;
}
