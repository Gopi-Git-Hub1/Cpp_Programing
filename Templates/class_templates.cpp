#include <iostream>
using namespace std;
template < typename T >
class sum
{
	public:
		T x;
		T y;
		sum(T a, T b): x(a),y(b){ cout<<x+y<<endl;}
		void display()
		{
			cout<<x+y<<endl;
		}

};
int main()
{
	class sum <int>obj1(4,6);
	class sum <float>obj2(4.6,15.4);
	class sum <double>obj3(24.6,5.4);
	cout<<"---------------------"<<endl;
	obj1.display();
	obj2.display();
	obj3.display();
	return 0;

}
