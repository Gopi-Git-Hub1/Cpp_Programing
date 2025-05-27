#include <iostream>
#include <memory>
using namespace std;
class unique
{
	public:
		int data;
		unique()
		{
			data = 1;
			cout<<"constructor..."<<endl;
		}
		~unique()
		{
			cout<<"distructor..."<<endl;

		}

		void display()
		{
			cout<<"data : "<<data<<endl;
		}
};
int main()
{
	unique_ptr<unique>unq_ptr1(new unique);
	cout<<"-------------------"<<endl;
	cout<<unq_ptr1.get()<<endl;
	cout<<"-------------------"<<endl;
	unique_ptr<unique>unq_ptr2 = move(unq_ptr1);
	cout<<unq_ptr1.get()<<endl;
	cout<<unq_ptr2.get()<<endl;
	cout<<"-------------------"<<endl;
	unique_ptr<unique>unq_ptr3 = move(unq_ptr2);
	cout<<unq_ptr1.get()<<endl;
	cout<<unq_ptr2.get()<<endl;
	cout<<unq_ptr3.get()<<endl;
	cout<<"-------------------"<<endl;

}
