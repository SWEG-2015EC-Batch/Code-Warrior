#include <iostream>
using namespace std;
const int ROWS = 3;
const int COLS = 4;

int main() {
    int first[ROWS][COLS];
    int second[ROWS][COLS];
    int result[ROWS][COLS];
    cout << "Enter elements for the first array:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> first[i][j];
        }
    }
    cout << "Enter elements for the second array:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
           cout << "Enter element at position (" << i << ", " << j << "): ";
           cin >> second[i][j];
        }
    }
    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = first[i][j] + second[i][j];
        }
    }
    cout << "Resulting data elements:" <<endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << result[i][j] << "\t";
        }
           cout <<endl;
    }

    return 0;
}
