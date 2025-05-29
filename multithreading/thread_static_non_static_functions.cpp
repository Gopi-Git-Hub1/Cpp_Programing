#include <iostream>
#include <thread>

using namespace std;

class MyClass {
public:
    // Non-static member function
    void f1(int num) {
        cout <<"f1 num : "<< num << endl;
    }

    // Static member function that takes one parameter
    static void f2(int num) {
        cout <<"f2 num : "<<num << endl;
    }
};

int main() {
    
    // Member functions 
    // requires an object
    MyClass obj;
    
    // Passing object and parameter
    thread t1(&MyClass::f1, &obj, 3);
    
    t1.join(); 
    
    // Static member function can 
    // be called without an object
    thread t2(&MyClass::f2, 7);
    
    // Wait for the thread to finish
    t2.join();  

    return 0;
}
