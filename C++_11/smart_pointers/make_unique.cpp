#include <iostream>
#include <memory>
using namespace std;
int main()
{
	unique_ptr<int>uPtr = make_unique<int>(10);
	unique_ptr<int>uPtr1(new int(20));
	auto uPtr2 = make_unique<int>(30);
	cout<<"uPtr  : "<<*uPtr<<endl;
	cout<<"uPtr1 : "<<*uPtr1<<endl;
	cout<<"uPtr2 : "<<*uPtr2<<endl;
	return 0;
}
