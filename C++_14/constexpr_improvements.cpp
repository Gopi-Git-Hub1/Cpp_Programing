#include <iostream>

// constexpr function to calculate factorial at compile time
constexpr long long factorial(int n) {
	long long result = 1;
	for (int i = 1; i <= n; ++i) {
		result *= i;
	}
	return result;
}

int main() {
	// Calculate factorial at compile time
	constexpr long long fact5 = factorial(5);
	int runtime_value = 6;
	// Calculate factorial at runtime (if input is not compile-time constant)
	long long fact_runtime = factorial(runtime_value);

	std::cout << "Factorial of 5 (compile-time): " << fact5 << std::endl; // Output: Factorial of 5 (compile-time): 120
	std::cout << "Factorial of 6 (runtime):     " << fact_runtime << std::endl; // Output: Factorial of 6 (runtime):     720
	return 0;
}
