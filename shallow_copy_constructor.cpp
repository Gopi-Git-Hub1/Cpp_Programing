#include <iostream>
using namespace std;
class Widget {
public:
    int id;
    Widget(int id): id(id) {}

    // User-defined shallow copy constructor
    Widget(const Widget& w): id(w.id) {
        std::cout << "Shallow copy of Widget id: " << id << std::endl;
    }
    void display()
    {
	    cout<<"id : "<<id<<endl;
    }
};

int main() {
    Widget original(1);
	original.display();
    Widget copy = original;  // User-defined shallow copy constructor is called
    copy.display();
}

