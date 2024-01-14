
#include <iostream>
using namespace std;
int main() {
    const int rows = 3;
    const int cols = 4;

    int array2D[rows][cols];

    cout << "Enter elements for the 3x4 array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element (" << (i + 1) << ", " << (j + 1) << "): ";
            cin >> array2D[i][j];
        }
    }

    int sumOfEven = 0;
    cout << "\nEven Array Elements (with '*' for odd numbers):" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array2D[i][j] % 2 == 0) {
                cout << array2D[i][j] << "\t";
                sumOfEven += array2D[i][j];
            } else {
                cout << "*\t";
            }
        }
        cout << endl;
    }

    cout << "\nSum of Even Array Elements: " << sumOfEven << endl;

    return 0;
}
