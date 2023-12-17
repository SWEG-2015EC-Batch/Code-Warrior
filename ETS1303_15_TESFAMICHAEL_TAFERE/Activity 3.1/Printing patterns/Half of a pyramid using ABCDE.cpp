//Printing half of a triangle using ABCDE
//By Tesfamichael 
#include <iostream>
using namespace std;

int main() {
    int n = 5;  
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            char currentChar = 'A' + j - 1;
            cout << currentChar << " ";
        }
        cout << endl;
    }

    return 0;
}
