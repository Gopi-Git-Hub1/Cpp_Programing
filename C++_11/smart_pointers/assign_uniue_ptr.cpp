#include <iostream>
#include <memory>
using namespace std;
int main()
{
	unique_ptr<int>uPtr1=make_unique<int>(10);
	cout<<"uPtr1 : "<<*uPtr1<<endl;
	cout<<"get id : "<<uPtr1.get()<<endl;
	unique_ptr<int>uPtr2=move(uPtr1);
	cout<<"get id : "<<uPtr1.get()<<endl;
	cout<<"uPtr2 : "<<*uPtr2<<endl;
	cout<<"get id : "<<uPtr2.get()<<endl;
	unique_ptr<int>uPtr3 = move(uPtr2);
	cout<<"get id : "<<uPtr1.get()<<endl;
	cout<<"get id : "<<uPtr2.get()<<endl;
	cout<<"uPtr3 : "<<*uPtr3<<endl;
	cout<<"get id : "<<uPtr3.get()<<endl;
	return 0;
}
