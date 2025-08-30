#include <iostream>
using namespace std;

void printPrimeFactorization(int n) {
    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        cout << 2 << " ";
        n /= 2;
    }

    // n must be odd at this point, so we can skip even numbers
    for (int i = 3; i <= n; i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2)
        cout << n << " ";
    
    cout << endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Prime factorization: ";
    printPrimeFactorization(number);
    return 0;
}

