//Printing a hollow pyramid 
//By Tesfamichael 
#include <iostream>
using namespace std;

int main()
{
    int I, j, n=5;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << "  "; // Print spaces for indentation
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            // Print '*' for the first and last row, and first and last column
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << "* ";
            } else {
                cout << "  "; // Print two spaces for the hollow part
            }
        }
        cout << endl;
}
return 0;
}
