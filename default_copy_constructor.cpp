#include <iostream>
using namespace std;

class SimpleClass {
public:
    int a;
    SimpleClass(int x) : a(x) {}  // Parameterized constructor
    // The compiler implicitly defines a default copy constructor.
    void display()
    {
	    cout<<"a : "<<a<<endl;
    }
};

int main() {
    SimpleClass obj1(10);
    obj1.display();
    SimpleClass obj2 = obj1;       // Default copy constructor called
    obj2.display();
    return 0;
}

