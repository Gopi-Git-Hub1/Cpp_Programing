#include <iostream>
#include <type_traits>
using namespace std;
/*
 * is_integral
 * is_floating_point
 * is_array
 * is_const
 * is_reference
 */
int main()
{
	cout<<endl<<"is_integral :"<<endl<<endl;
	
	cout<<"int is_integral : "<<is_integral<int>::value<<endl;
	cout<<"char is_integral : "<<is_integral<char>::value<<endl;
	cout<<"float is_integral : "<<is_integral<float>::value<<endl;
	cout<<"double is_integral : "<<is_integral<double>::value<<endl;
	
	cout<<"is_floating_point  :"<<endl<<endl;

	cout<<"float is_floating_point  : "<<is_floating_point <float>::value<<endl;
	cout<<"double is_floating_point  : "<<is_floating_point <double>::value<<endl;
	cout<<"char is_floating_point  : "<<is_floating_point <char>::value<<endl;
	cout<<"int is_floating_point  : "<<is_floating_point <int>::value<<endl;

	cout<<endl<<"is_array  :"<<endl<<endl;

	cout<<"int a[] is_array : "<<is_array <int[]>::value<<endl;
	cout<<"char a[] is_array : "<<is_array <char[]>::value<<endl;
	cout<<"float a[] is_array : "<<is_array <float[]>::value<<endl;
	cout<<"double a[] is_array : "<<is_array <double[]>::value<<endl;
	int a[20];
	cout<<"int a[20] is_array : "<<is_array<decltype(a)>::value<<endl;
	bool b[100];
	cout<<"bool b[100] is_array : "<<is_array<decltype(b)>::value<<endl;
	char c[30];
	cout<<"char c[30] is_array : "<<is_array<decltype(c)>::value<<endl;
	int i[0];
	cout<<"int i[0] is_array : "<<is_array<decltype(i)>::value<<endl;
	char ch[0];
	cout<<"char ch[0] is_array : "<<is_array<decltype(ch)>::value<<endl;
	
	cout<<endl<<"is_const  :"<<endl<<endl;
	
	cout<<" int const is_const : "<<is_const<int const>::value<<endl;
	cout<<" const int is_const : "<<is_const<const int>::value<<endl;
	cout<<" int is_const : "<<is_const<int>::value<<endl;
	cout<<" float  is_const : "<<is_const<float>::value<<endl;
	int const C = 20;
	cout<<" int const c =20 is_const : "<<is_const<decltype(C)>::value<<endl;
	const int c1 = 30;
	cout<<" const int c1 = 30 is_const : "<<is_const<decltype(c1)>::value<<endl;
	int I = 20;
	cout<<" int I =20  is_const : "<<is_const<decltype(I)>::value<<endl;
	float F = 2.1;
	cout<<" float F = 2.1  is_const : "<<is_const<decltype(F)>::value<<endl;

	cout<<endl<<"is_reference   :"<<endl<<endl;

	cout<<"int is_reference : "<<is_reference <int>::value<<endl;
	cout<<"int& is_reference : "<<is_reference <int&>::value<<endl;
	cout<<"float is_reference : "<<is_reference <float>::value<<endl;
	cout<<"float& is_reference : "<<is_reference <float&>::value<<endl;
	int REF = 30;
	int &ref = REF;
	cout<<"REF is_reference : "<<is_reference <decltype(REF)>::value<<endl;
	cout<<"ref is_reference : "<<is_reference <decltype(ref)>::value<<endl;

	return 0;
}
