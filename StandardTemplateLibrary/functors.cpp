#include <iostream>
//#include <functional>
using namespace std;
/*
 *Arithmetic Functors
 *Relational Functors
 *Logical Functors
 *Bitwise Functors
 */
class functor                 // the object of class behaves as function is called functor 
{
	public:
		int x;
		functor(int y):x(y){};
		int operator () (int a, int b)
		{
			return x + a + b;
		}
};
int main()
{
	class functor obj(1);
	cout<<"result : "<<obj(0,0)<<endl;
	cout<<"result : "<<obj(1,1)<<endl;
	cout<<"result : "<<obj(2,2)<<endl;
	cout<<"result : "<<obj(3,3)<<endl;
	cout<<"result : "<<obj(4,4)<<endl;
	return 0;
}
