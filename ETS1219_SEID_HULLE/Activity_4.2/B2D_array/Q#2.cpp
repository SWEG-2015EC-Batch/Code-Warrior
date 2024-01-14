#include <iostream>
using namespace std;

const int MAX_ROWS = 100;  
const int MAX_COLS = 100; 
void calculateAndDisplayResults(int matrix[][MAX_COLS], int rows, int cols) {
    
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMultiplication of Row Elements:" << endl;
    for (int i = 0; i < rows; ++i) {
        int rowProduct = 1;
        for (int j = 0; j < cols; ++j) {
            rowProduct *= matrix[i][j];
        }
        cout << "Row " << (i + 1) << ": " << rowProduct << endl;
    }


    cout << "\nSum of Column Elements:" << endl;
    for (int j = 0; j < cols; ++j) {
        int colSum = 0;
        for (int i = 0; i < rows; ++i) {
            colSum += matrix[i][j];
        }
        cout << "Column " << (j + 1) << ": " << colSum << endl;
    }
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[MAX_ROWS][MAX_COLS];
    cout << "Enter elements for the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element (" << (i + 1) << ", " << (j + 1) << "): ";
            cin >> matrix[i][j];
        }
    }

    calculateAndDisplayResults(matrix, rows, cols);

    return 0;
}

