#include <iostream>
using namespace std;
// C++ program to demonstrate problem with NULL

// function with integer argument
void fun(int N)   { cout << "fun(int)"; return;}

// Overloaded function with char pointer argument
void fun(char* s)  { cout << "fun(char *)"; return;}

int main()
{
	// Ideally, it should have called fun(char *),
	// but it causes compiler error.
	/* fun(NULL); */ 
	//NULL is typically defined as (void *)0 and conversion of NULL to integral types is allowed. So the function call fun(NULL) becomes ambiguous
		   //nullptr is a keyword that can be used at all places where NULL is expected.
		   //Like NULL, nullptr is implicitly convertible and comparable to any pointer type.
		   //Unlike NULL, it is not implicitly convertible or comparable to integral types.
		   //nullptr is convertible to bool. 
	fun(nullptr);
       cout<<endl;
	int *ptr = nullptr;
        if(ptr)
	{
		cout<<"TRUE..!"<<endl;
	}
	else
	{
		cout<<"FLASE..!"<<endl;
	}	
	return 0;
}
