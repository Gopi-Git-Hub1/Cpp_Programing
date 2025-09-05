
#include <iostream>

int main() {
    int* arr = new int[10];  // Allocates memory
    arr[0] = 42;
    // No delete[] => memory leak
    //delete[] arr;
    return 0;
}

