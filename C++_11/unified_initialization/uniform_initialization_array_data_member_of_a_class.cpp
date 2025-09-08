#include <iostream>
using namespace std;
class A
{
	int arr[3];
	public:
	// initializing array using 
	// uniform initialization
	A(int x, int y, int z):arr{x,y,z}{};
	void show()
	{
		for(int i =0;i<3;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
};
int main()
{
	class A obj(1,2,3);
	obj.show();

	return 0;
}
