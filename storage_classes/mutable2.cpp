#include <iostream>
using namespace std;
class MyClass{
	int x;
	mutable int y;
	public:
	MyClass(int a = 0,int b = 0):x(a),y(b){};
	void setX(int m = 0 ){
		this->x = m;
	}
	void setY(int n = 0)const{
	this->y = n;
	}
	void display() const{
		cout<<"X : "<<x<<endl<<"Y : "<<y<<endl;
	}
};
int main()
{
	const MyClass obj(10,20);
	obj.display();
	//obj.setX(50);
	obj.setY(100);
	obj.display();

	return 0;
}
