#include <iostream>
#include <cstring>
using namespace std;
class DeepClass {
    char* data;

public:
    DeepClass(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }

    // User-defined deep copy constructor
    DeepClass(const DeepClass& that) {
        data = new char[strlen(that.data) + 1];
        strcpy(data, that.data);
    }

    ~DeepClass() {
        delete[] data;
    }
    void display()
    {
	    cout<<"data : "<<data<<endl;
    }
};

int main() {
    DeepClass obj1("Deep Copy");
    obj1.display();
    DeepClass obj2 = obj1;  // Deep copy constructor is called
    obj2.display();
}

