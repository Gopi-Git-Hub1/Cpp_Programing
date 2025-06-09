#include <iostream>
#include <string>

// Variable template for pi, with different types
template <typename T>
constexpr T pi = 3.14159265359;

int main() {
	double pi_double = pi<double>;
	float pi_float = pi<float>;
	long double pi_long_double = pi<long double>;

	std::cout << "Pi as double: " << pi_double << std::endl; // Output: Pi as double: 3.14159
	std::cout << "Pi as float:  " << pi_float << std::endl;   // Output: Pi as float:  3.14159
	std::cout << "Pi as long double: " << pi_long_double << std::endl; // Output: Pi as long double: 3.14159265359

	return 0;
}
