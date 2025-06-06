#include <iostream>
using namespace std;
class MyClass{
	int x;
	mutable int y;
	public:
	MyClass(int x=0, int y=0){
		this->x = x;
		this->y = y;
	}
	void setx(int x=0){
		this->x = x;
	}
	void sety(int y=0) const { //member function is constant, but data will be changed
		this->y = y;
	}
	void display() const{
		cout<<endl<<"(x: "<<x<<" y: "<<y << ")"<<endl;
	}
};
int main(){
	const MyClass s(15,25); // A const object
	cout<<endl <<"Before Change: ";
	s.display();
	//s.setx(150);
	s.sety(250);
	cout<<endl<<"After Change: ";
	s.display();
}
