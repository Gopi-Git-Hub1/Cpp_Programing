#include <iostream>
#include <unordered_map>
using namespace std;

void findDuplicates(int arr[], int size) {
    unordered_map<int, int> freq;

    // Count frequency of each element
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    cout << "Duplicate elements are: ";
    bool found = false;
    for (auto pair : freq) {
        if (pair.second > 1) {
            cout << pair.first << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "None";
    }

    cout << endl;
}

int main() {
    int arr[] = {4, 2, 7, 4, 8, 2, 9, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, size);

    return 0;
}
