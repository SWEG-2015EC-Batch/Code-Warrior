//Printing A to X
//By Tesfamichael 
#include <iostream>
using namespace std;

int main() {
    int rows = 4; 
    int columns = 6; 

   
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            char currentChar = 'A' + i * columns + j;
            
            
            if (currentChar > 'X') {
                break;
            }

            cout << currentChar << " ";
        }
        cout << endl;
    }

    return 0;
}
