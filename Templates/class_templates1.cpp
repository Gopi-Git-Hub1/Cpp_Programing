#include <iostream>
using namespace std;
template < typename T >
class data
{
	public:
		T x;
		data(T y):x(y){	cout<<x<<endl; };
		void display(T a)
		{
			x = a;
			cout<<x<<endl;
		}
};
int main()
{
	class data <int>obj1(10);
	class data <float>obj2(20.12);
	class data <double>obj3(30.123);
	class data <char>obj4('A');
	class data <string>obj5("string...");
	cout<<"---------------------"<<endl;
	obj1.display(10);
	obj2.display(20.123);
	obj3.display(30.1234);
	obj4.display('B');
	obj5.display("string......");
	return 0;

}
