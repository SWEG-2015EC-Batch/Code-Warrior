#include <iostream>
using namespace std;

int main() {
    char i, j;
    
    bool stop = false;
    
    do{
    cout << "The number of Pattern is look like: \n\n";

    for ( i = 'A'; i <= 'E'; i++) {
        for ( j = 'A'; j <= 'E'; j++) {
            cout <<j<< " ";
        }
         
        cout << endl;
    }
    cout<<"\nEnter 0 to exit or Enter 1 to continue: ";
    cin>>stop;
    }while(stop != 0);

    return 0;	
}
