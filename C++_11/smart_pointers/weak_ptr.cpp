#include <iostream>
#include <memory>
using namespace std;
class weak
{
	public:
		int data;
		weak()
		{
			data = 1;
			cout<<"constructor..."<<endl;
		}
		~weak()
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
	shared_ptr<weak>shd_ptr(new weak);
	cout<<shd_ptr.get()<<endl;
	cout<<"ref count: "<<shd_ptr.use_count()<<endl;
	weak_ptr<weak>wk_ptr(shd_ptr);
	cout<<shd_ptr.get()<<endl;
	cout<<"ref count: "<<wk_ptr.use_count()<<endl;
	return 0;

}
