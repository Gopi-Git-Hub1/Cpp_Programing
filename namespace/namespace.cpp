#include <iostream>
using namespace std;
namespace first
{
int x = 10;
}
namespace second
{
int x = 20;
}
namespace using_directive
{
	int x = 30;
}
int main()
{
	using namespace using_directive;

	cout<<"x : "<<x<<endl;

	cout<<"x : "<<second::x<<endl;

	cout<<"x : "<<first::x<<endl;	

	return 0;
}
