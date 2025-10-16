/*
 *
 * A virtual function in C++ is a member function in a base class that you expect to be overridden in derived classes.
 * It enables runtime polymorphism, allowing the correct function to be called for an object, even when accessed through a base class pointer.
 *
 * Typically used when working with inheritance and pointers or references to base class.
 *
 */
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->speak();  // Output: Dog barks
    a2->speak();  // Output: Cat meows

    delete a1;
    delete a2;

    return 0;
}
