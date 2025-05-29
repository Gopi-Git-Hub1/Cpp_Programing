#include <iostream>
#include <thread>
using namespace std;

int main()
{
	int x = 10;
	int y = 20;
	//thread t([&](){
	thread t([=](){
			//x++;
			//y++;
			cout<<"x : "<<x<<endl;
			cout<<"y : "<<y<<endl;
			});
	t.join();
	return 0;
}
