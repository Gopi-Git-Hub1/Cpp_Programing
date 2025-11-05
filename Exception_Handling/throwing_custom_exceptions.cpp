#include <iostream>
#include <exception>
using namespace std;
class NegativeValueException : public exception
{
	int val;
	public:
	NegativeValueException(int x):val(x){};
	// Override what() method
	const char* what() const noexcept override {
		return "Negative value error occurred!";
	}
	// Optional: method to get the invalid value
	int getValue() const {
		return val;
	}
};
// Function that throws the custom exception
void checkValue(int x) {
	if (x < 0) {
		throw NegativeValueException(x);
	}
	else {
		cout << "Value is: " << x << endl;
	}
}
int main() {
	int numbers[] = {10, -5, 20};

	for (int n : numbers) {
		try {
			checkValue(n);
		}
		catch (NegativeValueException &e) {
			cout << "Exception caught: " << e.what()
				<< " Value = " << e.getValue() << endl;
		}
	}

	return 0;
}
