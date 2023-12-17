//Mirrored half triangle using numbers 
//By Tesfamichael 
#include <iostream>
using namespace std;

int main() {
    int height = 5;  

    
    for (int i = 1; i <= height; ++i) {
        
        for (int k = 1; k <= height - i; ++k) {
            cout << "  ";
        }
        
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
