#include <iostream>
using namespace std;
template < typename T >
class data
{
	public:
		T x;
		data(T y):x(y){};
		void display()
		{
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
	obj1.display();
	obj2.display();
	obj3.display();
	obj4.display();
	obj5.display();
	return 0;

}
