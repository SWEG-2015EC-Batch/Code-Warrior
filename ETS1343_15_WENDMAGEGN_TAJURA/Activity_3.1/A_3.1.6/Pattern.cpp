#include <iostream>
using namespace std;

int main() {
    int i, j, pattern;
    bool stop = false;
    
    do{
    cout << "Enter the number of Pattern: ";
    cin >> pattern;

    for ( i = 1; i <= pattern; i++) {
        for ( j = 1; j <= pattern; j++) {
            cout << "* ";
        }
         
        cout << endl;
    }
    cout<<"Enter 0 to exit or Enter 1 to continue: ";
    cin>>stop;
    }while(stop != 0);

    return 0;	
}
