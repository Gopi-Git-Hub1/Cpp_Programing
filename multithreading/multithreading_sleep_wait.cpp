/*
 *
 * In C++ multithreading, sleep and wait are two different mechanisms used to control thread execution.
 *
 * sleep Method:
 * 
 * The sleep function pauses the execution of a thread for a specified duration.
 * It's useful when you want to delay a thread temporarily.
 *
 * wait Method:
 * 
 * wait is typically used with condition variables to pause a thread until a certain condition is met.
 * It's more efficient than sleep for synchronization between threads.
 *
 */
#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <condition_variable>

using namespace std;


mutex mtx;
condition_variable cv;
bool ready = false;

void task() {
    cout << "Task started\n";
    this_thread::sleep_for(chrono::seconds(2)); // Sleep for 2 seconds
    cout << "Task resumed after sleep\n";
}


void worker() {
    unique_lock<mutex> lock(mtx);
    cv.wait(lock, [] { return ready; }); // Wait until 'ready' becomes true
    cout << "Worker thread proceeding\n";
}


int main()
{
	thread t1(task);
	t1.join();

	thread t2(worker);
	this_thread::sleep_for(chrono::seconds(2)); // Simulate work

	{
		lock_guard<mutex> lock(mtx);
		ready = true;
	}
	
	cv.notify_one(); // Wake up the worker thread
	t2.join();

	return 0;
}
