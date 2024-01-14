
#include <iostream>
using namespace std;

bool areArraysIdentical(const int arr1[], const int arr2[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    const int maxSize = 100; 
    int size;
    cout << "Enter the size of the arrays: ";
    cin >> size;

    int array1[maxSize];
    cout << "Enter elements for the first array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << (i + 1) << ": ";
        cin >> array1[i];
    }

    int array2[maxSize];
    cout << "Enter elements for the second array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << (i + 1) << ": ";
        cin >> array2[i];
    }


    if (areArraysIdentical(array1, array2, size)) {
        cout << "\nThe arrays are identical." << endl;
    } else {
        cout << "\nThe arrays are not identical." << endl;
    }

    return 0;
}
