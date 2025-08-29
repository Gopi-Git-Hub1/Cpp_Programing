#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
int counter = 0;
mutex mtx;
void increment()
{
	unique_lock<mutex>lock(mtx, defer_lock);

	lock.lock();
	counter += 2;
	lock.unlock();
}
int main()
{
	thread t1(increment);
	thread t2(increment);
	thread t3(increment);

	t1.join();
	t2.join();
	t3.join();

	cout<<"Counter : "<<counter<<endl;

	return 0;
}
