#include <iostream>
using namespace std;

class Base {
public:

    // Virtual function
    virtual  void display() {
    //void display() {
        cout << "Base class display" << endl;
    }
};

class Derived : public Base {
public:

    // Overriding the virtual 
    // function in the derived class
    void display() {
        cout << "Derived class display" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;
    
    // Base class pointer pointing 
    // to derived class object
    basePtr = &derivedObj;
    
    // Calling the virtual function
    basePtr->display(); 
    return 0;
}
