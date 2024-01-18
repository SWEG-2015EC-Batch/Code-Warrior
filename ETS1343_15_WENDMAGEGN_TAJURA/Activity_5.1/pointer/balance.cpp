#include <iostream>

using namespace std;

int main() {
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    int arr[3][4] = {{10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33}};

    // Print the address of each element in the 1D array
    cout << "1D Array - balance:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << " - Address: " << &balance[i] << endl;
    }

    cout << endl;

    // Print the address of each element in the 2D array
    cout << "2D Array - arr:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Element [" << i << "][" << j << "] - Address: " << &arr[i][j] << endl;
        }
    }

    cout << endl;

    // Print the array elements using pointers instead of array indices
    cout << "1D Array - balance (using pointers):\n";
    for (int i = 0; i < 5; i++) {
        double* ptr = &balance[i];
        cout << "Element " << i << " - Value: " << *ptr << endl;
    }

    cout << endl;

    // Print the array elements using another pointer
    cout << "2D Array - arr (using another pointer):\n";
    int* ptr = &arr[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Element [" << i << "][" << j << "] - Value: " << *(ptr + i * 4 + j) << endl;
        }
    }

    return 0;
}
