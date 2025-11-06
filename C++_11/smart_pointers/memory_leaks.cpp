#include <iostream>
#include <memory>
using namespace std;
void function1()
{
	int *ptr = new int(15);
	int x = *ptr;
	if(x == 15)
	{
		cout<<"x = "<<x<<endl;
		return;                    // memory leak.....
	}

	delete ptr;
}
void function2()
{
	unique_ptr<int>uPtr = make_unique<int>(15);
        int x = *uPtr;
	if(x == 15)
	{
		cout<<"x = "<<x<<endl;
		return;                   // no memory leak.....
	}
}
int main()
{
	function1();
	function2();
	return 0;
}
