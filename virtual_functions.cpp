#include <iostream>
using namespace std;
class base
{
	public:
		int x;
		base(int a):x(a){};
		virtual void display()
		{
			cout<<"base x : "<<x<<endl;

		}
};
class derived : public base
{
	public:
		int y;
		derived(int b ):base(b){};
		void display()
		{
			cout<<"derived x : "<<x<<endl;

		}
};
int main()
{
	class base *ptr;
        class derived obj(10);
	ptr = &obj;
 	ptr->display();	

	return 0;
}
