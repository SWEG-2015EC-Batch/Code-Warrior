//Printing an inverted pyramid 
//By Tesfamichael 
#include <iostream>
using namespace std;

int main()
{
    int I, j, n=5;

    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << "  "; // Print spaces for indentation
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "* ";
        }
        cout << endl;

}
return 0;
}
