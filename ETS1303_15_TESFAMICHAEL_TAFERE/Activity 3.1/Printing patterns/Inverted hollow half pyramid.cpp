//Printing an inverted hollow half pyramid 
//By Tesfamichael 
#include <iostream>
using namespace std;

int main() {
    int height;

    // Input height from the user
    cout << "Enter the height of the inverted half hollow pyramid: ";
    cin >> height;

    // Print the inverted half hollow pyramid pattern
    for (int i = height; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            // Print '*' for the first and last column, otherwise print spaces
            if (j == 1 || j == i || i == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
