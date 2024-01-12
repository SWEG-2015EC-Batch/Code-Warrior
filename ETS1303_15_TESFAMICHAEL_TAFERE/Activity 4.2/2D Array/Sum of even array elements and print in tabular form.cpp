#include <iostream>
using namespace std;



int main() {
   const int rows = 3;
   const int cols = 4;
    int array[rows][cols] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int evenSum = 0;

    cout << "Array Elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << "\t";
            if (array[i][j] % 2 == 0) {
                evenSum += array[i][j];
            }
        }
        cout <<endl;
    }

    cout << "\nSum of Even Elements: " << evenSum << "\n";

    return 0;
}
