#include <iostream>
#include <string>

int main() {
	// Generic lambda that can add two values of any type that support '+'
	auto generic_adder = [](auto a, auto b) {
		return a + b;
	};

	int int_sum = generic_adder(5, 10);
	double double_sum = generic_adder(3.14, 2.71);
	std::string string_concat = generic_adder(std::string("Hello, "), std::string("C++14!"));

	std::cout << "Integer sum: " << int_sum << std::endl; // Output: Integer sum: 15
	std::cout << "Double sum: " << double_sum << std::endl; // Output: Double sum: 5.85
	std::cout << "String concatenation: " << string_concat << std::endl; // Output: String concatenation: Hello, C++14!

	return 0;
}
