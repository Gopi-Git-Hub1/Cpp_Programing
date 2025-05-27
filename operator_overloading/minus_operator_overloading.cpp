#include <iostream>
using namespace std;
class plus_operator
{
	public:
		int x;
		int y;


		plus_operator(int a=0, int b=0){
		x=a;
		y=b;
		}
		plus_operator operator - (plus_operator &A)
		{
			plus_operator res;
			res.x = x - A.x;  
			res.y =	y - A.y;
			return res;
		}
		void display()
		{
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
		}
};
int main()
{
	class plus_operator obj1(1,1);
	class plus_operator obj2(2,2);
	class plus_operator obj3;
       obj3	= obj2 - obj1;
	obj3.display();
	return 0;
}
