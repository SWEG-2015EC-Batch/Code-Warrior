#include <iostream>
using namespace std;


int main() {
   const int rows = 3;
   const int cols = 3;
    int array[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rowProduct[rows] = {1, 1, 1};
    int colSum[cols] = {0};
  
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            rowProduct[i] *= array[i][j];
            colSum[j] += array[i][j];
        }
    }
    
    cout << "Row Products:\n";
    for (int i = 0; i < rows; ++i) {
        cout << "Row " << i + 1 << ": " << rowProduct[i] << "\n";
    }
  
    cout << "Column Sums:\n";
    for (int j = 0; j < cols; ++j) {
        cout << "Column " << j + 1 << ": " << colSum[j] << "\n";
    }

    return 0;
}
