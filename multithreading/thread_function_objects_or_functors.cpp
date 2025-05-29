#include <iostream>
#include <thread>
using namespace std;

// Define a function object (functor)
class functors
{
	public:
		int x;
		functors(int a):x(a){};
    // Overload the operator() to
    // make it callable
		void operator ()(){
			cout<<"display x : "<<x<<endl;
		}
};
int main()
{
    // Create a thread using
    // the functor object
	thread t(functors(100));
    // Wait for the thread to
    // complete
	t.join();
	return 0;
}
