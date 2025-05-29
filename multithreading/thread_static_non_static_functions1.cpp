#include <iostream>
#include <thread>
using namespace std;
class static_non_static_function_thread
{
	public:
		int x;
		void fun1(int x)
		{
			cout<<"fun1 x : "<<x<<endl;
		}
		static void fun2(int x)
		{
			cout<<"fun2 x : "<<x<<endl;
		}
};
int main()
{
	static_non_static_function_thread obj;
	thread t1(&static_non_static_function_thread::fun1, &obj, 10);
	t1.join();
	thread t2(&static_non_static_function_thread::fun2, 20);
	t2.join();
	return 0;
}
