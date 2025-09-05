#include <iostream>

int main() {
    int* buffer = nullptr;
    bool condition = true;

    if (condition) {
        buffer = new int[20];  // Allocated
    }

    // Forgot to delete[] buffer
    //delete[] buffer;
    return 0;
}

