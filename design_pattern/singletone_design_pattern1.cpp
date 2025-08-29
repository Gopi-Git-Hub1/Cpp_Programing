#include <iostream>
using namespace std;
class Singleton {
private:
    static Singleton* instance;

    // Private constructor
    Singleton() {    
        cout <<"Singleton instance created.\n";
    }

    // Delete copy constructor and assignment
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    ~Singleton()
    {
	    cout <<"Singleton instance distroyed.\n";
    }

public:
    static Singleton* getInstance() {
        if (instance == nullptr)
            instance = new Singleton();
        return instance;
    }

    void showMessage() {
        cout << "Hello from Singleton!" << endl;
    }
};

Singleton* Singleton::instance = nullptr;
int main() {
    Singleton* s1 = Singleton::getInstance();
    s1->showMessage();

    Singleton* s2 = Singleton::getInstance();
     s2->showMessage();
    cout << (s1 == s2)<<endl; // Will print 1 (true)
    return 0;
}
