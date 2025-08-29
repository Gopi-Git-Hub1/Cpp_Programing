#include <iostream>
#include <memory>
using namespace std;
int main()
{
	shared_ptr<int>sPtr1=make_shared<int>(10);
	cout<<"sPtr1 : "<<*sPtr1<<endl<<"ref count : "<<sPtr1.use_count()<<endl;
	cout<<"get id : "<<sPtr1.get()<<endl;
	shared_ptr<int>sPtr2=sPtr1;
	cout<<"sPtr1 : "<<*sPtr1<<endl<<"ref count : "<<sPtr1.use_count()<<endl;
	cout<<"get id : "<<sPtr1.get()<<endl;
	cout<<"sPtr2 : "<<*sPtr2<<endl<<"ref count : "<<sPtr2.use_count()<<endl;
	cout<<"get id : "<<sPtr2.get()<<endl;
	shared_ptr<int>sPtr3(sPtr2);
	cout<<"sPtr1 : "<<*sPtr1<<endl<<"ref count : "<<sPtr1.use_count()<<endl;
	cout<<"get id : "<<sPtr1.get()<<endl;
	cout<<"sPtr2 : "<<*sPtr2<<endl<<"ref count : "<<sPtr2.use_count()<<endl;
	cout<<"get id : "<<sPtr2.get()<<endl;
	cout<<"sPtr3 : "<<*sPtr3<<endl<<"ref count : "<<sPtr3.use_count()<<endl;
	cout<<"get id : "<<sPtr3.get()<<endl;
	return 0;
}
