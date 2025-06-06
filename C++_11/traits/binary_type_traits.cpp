#include <iostream>
#include <type_traits>
using namespace std;
/*
 * is_same
 * is_convertible
 */
class A{
};
class B:public A{
};
class C{
};
int main()
{
	cout<<endl<<"is_same :"<<endl<<endl;
	
	cout<<"int , int is_same : "<<is_same<int , int >::value<<endl;
	cout<<"int , float is_same : "<<is_same<int , float >::value<<endl;
	cout<<"float , int is_same : "<<is_same<float , int >::value<<endl;
	cout<<"float , float is_same : "<<is_same<float , float >::value<<endl;
	cout<<"char , int is_same : "<<is_same<char , int >::value<<endl;
	cout<<"float , char is_same : "<<is_same<float , char >::value<<endl;
	int I = 10;
	int i = 20;
	cout<<"int I = 10 , int i = 20 is_same : "<<is_same<decltype(I) , decltype(i) >::value<<endl;
	float f = 10;
	int m = 20;
	cout<<"float f = 10 , int m = 20 is_same : "<<is_same<decltype(f) , decltype(m) >::value<<endl;
	
	cout<<endl<<"is_convertible :"<<endl<<endl;
	
	cout<<"int to float is_convertible : "<<is_convertible <int, float>::value<<endl;
	cout<<"int to char is_convertible : "<<is_convertible <int, char>::value<<endl;
	cout<<"char to int is_convertible : "<<is_convertible <char, int>::value<<endl;
	cout<<"char to float is_convertible : "<<is_convertible <char, float>::value<<endl;
	cout<<"int to float is_convertible : "<<is_convertible <int, float>::value<<endl;
	cout<<"int to int is_convertible : "<<is_convertible <int, int>::value<<endl;
	cout<<"int to float is_convertible : "<<is_convertible <int, float>::value<<endl;
	cout<<"double to float is_convertible : "<<is_convertible <double, float>::value<<endl;

	cout<<"class B , class A is_convertible : "<<is_convertible <B*,A*>::value<<endl;
	cout<<"class A , class B is_convertible : "<<is_convertible <A*,B*>::value<<endl;
	cout<<"class A , class C is_convertible : "<<is_convertible <A*,C*>::value<<endl;
	cout<<"class C , class B is_convertible : "<<is_convertible <C*,B*>::value<<endl;

	int x = 10;
	int32_t y = 20;
	float F = 1.2;
	char ch = 'A';
	int64_t I64 = 30;
	double D = 23.87;
	cout<<"int x to int32_t = 20 is_convertible : "<<is_convertible <decltype(x), decltype(y)>::value<<endl;
	cout<<"float F = 1.2 to char ch = 'A' is_convertible : "<<is_convertible <decltype(F), decltype(ch)>::value<<endl;
	cout<<"inti x = 10 to int64_t = 63 is_convertible : "<<is_convertible <decltype(x), decltype(I64)>::value<<endl;
	cout<<"double D = 23.87 to float F = 1.2 is_convertible : "<<is_convertible <decltype(D), decltype(F)>::value<<endl;
	cout<<"float F = 1.2 to double D = 23.87 is_convertible : "<<is_convertible <decltype(F), decltype(D)>::value<<endl;
	
	return 0;
}
