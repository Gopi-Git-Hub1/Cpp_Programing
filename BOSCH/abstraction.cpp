/*
 *
 * Abstraction in C++ is one of the core principles of Object-Oriented Programming (OOP).
 * It refers to hiding the internal implementation details and showing only the essential features of an object.
 *
 * Real-Life Analogy:
 *
 * Think of a TV remote — you press buttons to change channels or adjust volume, but you don’t need to know how the internal circuitry works. 
 * That’s abstraction.
 *
 */
#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;
};

// Derived class
class Rectangle : public Shape {
private:
    int length, width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    void area() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

// Another derived class
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Shape* s1 = new Rectangle(10, 5);
    Shape* s2 = new Circle(7);

    s1->area();  // Output: Area of Rectangle: 50
    s2->area();  // Output: Area of Circle: 153.86

    delete s1;
    delete s2;

    return 0;
}
