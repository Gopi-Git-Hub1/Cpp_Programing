#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
void ditach_thread()
{
	cout<<"ditach method continue...."<<endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout<<"ditach method completed...."<<endl;


}
int main()
{
	thread t(ditach_thread);
	t.detach();
	cout<<"main thread continue...."<<endl;
	this_thread::sleep_for(chrono::seconds(3));
	return 0;
}
