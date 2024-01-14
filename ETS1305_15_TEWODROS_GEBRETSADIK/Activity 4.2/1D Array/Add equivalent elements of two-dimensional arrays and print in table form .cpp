#include <iostream>
using namespace std;

const int rows = 3;
const int cols = 3;

int main() {
    int first[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int second[rows][cols] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[rows][cols];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = first[i][j] + second[i][j];
        }
    }
  
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << result[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
