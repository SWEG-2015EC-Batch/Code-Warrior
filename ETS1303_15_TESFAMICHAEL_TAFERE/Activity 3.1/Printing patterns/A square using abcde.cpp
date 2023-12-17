//Printing a square using abcde
//By Tesfamichael 
#include <iostream>
using namespace std;

int main() {
    int n = 5;  
    
    for (int i = 0; i <n; ++i) {
        for (int j = 0; j < n; ++j) {
            char currentChar = 'a' + (j % 5);
            cout << currentChar << " ";
        }
        cout << endl;
    }

    return 0;
}
