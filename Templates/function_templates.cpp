#include <iostream>
using namespace std;
template <typename T>
T sum(T a, T b)
{
	return a + b;
}
int main()
{
	int x = 4;
	int y = 6;
	float f1 = 3.4;
       float f2 = 6.6;
	double d1 = 3.1;
	 double d2 = 6.9;
 	cout<<sum<int>(x,y)<<endl; 
 	cout<<sum<float>(f1,f2)<<endl; 
 	cout<<sum<double>(d1,d2)<<endl; 
	return 0;
}
