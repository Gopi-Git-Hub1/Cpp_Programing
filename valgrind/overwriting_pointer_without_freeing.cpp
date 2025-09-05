
#include <iostream>

int main() {
    int* ptr = new int[5];   // Allocates memory
                             //delete[] ptr;
    ptr = new int[10];       // Previous memory is lost (leaked)
    delete[] ptr;            // Only deletes the second allocation
    return 0;
}

