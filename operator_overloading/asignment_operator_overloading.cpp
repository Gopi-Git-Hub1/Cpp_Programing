#include <iostream>
using namespace std;
class default_asignment
{
	public:
		int val;
		void display()
		{
			cout<<val<<endl;
		}
};
class asignment_operator
{
	public:
		int id;
		string name;
		asignment_operator(int i, string n):id(i),name(n){};
		void operator = (asignment_operator & obj)
		{
			id = obj.id;
			name = obj.name;
		}
		void display()
		{
			cout<<" id = "<<id<<endl;
			cout<<" name = "<<name<<endl;
		}
};
int main()
{
	class default_asignment obj1;
	class default_asignment obj2;
	obj1.val = 20;
	obj2 = obj1;
	obj2.display();
	class asignment_operator obj3(1,"Gopi");
	class asignment_operator obj4(2,"Venkata Lakshmi");
	obj3.display();
	obj4.display();
	obj3 = obj4;
	obj3.display();
	return 0;
}
