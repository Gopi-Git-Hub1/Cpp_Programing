
#include <iostream>

void leakMemory() {
    int* data = new int[100];  // Allocated but never freed
			       //delete[] data;
}

int main() {
    leakMemory();
    return 0;
}

