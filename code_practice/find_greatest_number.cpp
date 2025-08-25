#include <iostream>
using namespace std;

int find_greatest_number(int a, int b, int c) {
    return max(a, max(b, c));
}

int main() {
    int x = 10, y = 25, z = 15;
    cout << "Greatest number is: " << find_greatest_number(x, y, z) << endl;
    return 0;
}

