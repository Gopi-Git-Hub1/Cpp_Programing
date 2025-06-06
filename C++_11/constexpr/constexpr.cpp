#include <iostream>
using namespace std;
//C++ program to demonstrate the use of constexpr 
constexpr int function(int a, int b){return a*b;}
class rectangle
{
	public:
		int h;
		int w;
		constexpr rectangle (int x, int y):h(x),w(y){}
		constexpr int getArea() const { return h*w;}
};
int main()
{ 
	//value of x,a,n and obj are computed at compile time.
   	constexpr int x = function(20,10);
	int a[function(2,3)] = {1,2,3,4,5,6};
	auto n = function(5,20);
	// Below object is initialized at compile time
	constexpr rectangle obj(5,6);
	cout<<"x    : "<<x<<endl;
	cout<<"a[5] : "<<a[5]<<endl;
	cout<<"n    : "<<n<<endl;
	constexpr int rectArea = obj.getArea();
	cout<<"area : "<<rectArea<<endl;
	auto area = obj.getArea();
	cout<<"area : "<<area<<endl;
	cout<<"area : "<<obj.getArea()<<endl;
	return 0;
}
