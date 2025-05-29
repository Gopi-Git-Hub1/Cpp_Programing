
/* 
 * c++ -pthread create_thread.cpp -o thread 
 * ./thread 
 *
 */

#include <iostream>
#include <thread>
using namespace std;

// Function to be run by the thread
void method()
{
	cout<<"Function to be run by the thread"<<endl;
}
using namespace std;
int main()
{
    // Create a thread that runs
    // the function func
	thread t(method);

    // Main thread waits for 't' to finish
	t.join();
	cout << "Main thread finished."<<endl;
	return 0;
}
