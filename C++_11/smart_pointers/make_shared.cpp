#include <iostream>
#include <memory>
using namespace std;
int main()
{
	shared_ptr<int>sPtr = make_shared<int>(10);
	shared_ptr<int>sPtr1(new int(20));
	auto sPtr2 = make_shared<int>(30);
	cout<<"sPtr  : "<<*sPtr<<endl;
	cout<<"sPtr1 : "<<*sPtr1<<endl;
	cout<<"sPtr2 : "<<*sPtr2<<endl;
	return 0;
}
