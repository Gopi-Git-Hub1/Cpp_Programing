#include <iostream>

// Function with return type deduction
auto add(int a, int b) {
	return a + b; // Return type is deduced as int
}

auto multiply(double x, double y) {
	return x * y; // Return type is deduced as double
}

int main() {
	int sum = add(20, 5);
	double product = multiply(2.5, 4.0);

	std::cout << "Sum: " << sum << std::endl; // Output: Sum: 25
	std::cout << "Product: " << product << std::endl; // Output: Product: 10

	return 0;
}
