#include <iostream>
#include <memory>
using namespace std;
class shared
{
	public:
		int data;
		shared()
		{
			data = 1;
			cout<<"constructor..."<<endl;
		}
		~shared()
		{
			cout<<"distructor..."<<endl;
		}
		void display()
		{
			cout<<"data = "<<data<<endl;
		}
};
int main()
{
	shared_ptr<shared>shd_ptr1(new shared);
	cout<<shd_ptr1.get()<<endl;
	cout<<"ref count: "<<shd_ptr1.use_count()<<endl;
	shared_ptr<shared>shd_ptr2(shd_ptr1);
	cout<<shd_ptr1.get()<<endl;
	cout<<shd_ptr2.get()<<endl;
	cout<<"ref count: "<<shd_ptr1.use_count()<<endl;
	shared_ptr<shared>shd_ptr3(new shared);
	shd_ptr3 = shd_ptr2;
	cout<<shd_ptr1.get()<<endl;
	cout<<shd_ptr2.get()<<endl;
	cout<<shd_ptr3.get()<<endl;
	cout<<"ref count: "<<shd_ptr1.use_count()<<endl;

	return 0;

}
