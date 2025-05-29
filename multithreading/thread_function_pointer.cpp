#include <iostream>
#include <thread>
using namespace std;
void function_pointer(int a)
{
	cout<<"a : "<<a<<endl;
}
int main()
{
	int x = 10;
	thread t(function_pointer, x);
	t.join();
	return 0;
}
