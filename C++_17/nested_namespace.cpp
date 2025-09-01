#include <iostream>
using namespace std;


namespace X::Y::Z {
            void greet() {
                std::cout << "Hello from X::Y::Z\n";
            }
        }

namespace A {
    namespace B {
        namespace C {
            void greet() {
                std::cout << "Hello from A::B::C\n";
            }
        }
    }
}

// Outer namespace
namespace outer {
	void fun(){
		cout << "Inside outer namespace" << endl;
	}

	// Inner namespace
	namespace inner {
		void func() {
			cout << "Inside inner namespace"<<endl;
		}
	}
}

int main() {

	// Accessing member of inner 
	// namespace
	outer::inner::func();  
	outer::fun();

	A::B::C::greet();
	X::Y::Z::greet();

	return 0;
}
