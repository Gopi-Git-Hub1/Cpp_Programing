#include <iostream>
using namespace std;

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
	return 0;
}
