#include <iostream>
using namespace std;
const int ROWS = 3;
const int COLS = 4;

int main() {
    int first[ROWS][COLS];
    int second[ROWS][COLS];
    int result[ROWS][COLS];

    cout << "Enter elements of the first array:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> first[i][j];
        }
    }

    cout << "\nEnter elements of the second array:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> second[i][j];
        }
    }

    cout << "\nResulting Array after Addition:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = first[i][j] + second[i][j];
            cout << result[i][j] << "\t";
        }
        cout <<endl;
    }

    return 0;
}
