
//The function pointer is used to point functions, similarly, the pointers are used to point variables.
//It is utilized to save a function's address.
//The function pointer is either used to call the function or it can be sent as an argument to another function.

#include <iostream>
using namespace std;

// callback function
int fun(char c)
{
	return (int)c;
}

// another function that is taking callback
void function(char c, int (*ptr)(char))
{
	int ascii = ptr(c);
	cout << "ASCII code of " << c << " is: " << ascii<<endl;
}
int main()
{
	function('A',&fun);
	return 0;
}
