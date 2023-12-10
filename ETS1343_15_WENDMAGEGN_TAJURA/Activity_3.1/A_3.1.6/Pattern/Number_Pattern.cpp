#include <iostream>
using namespace std;

int main() {
    int i, j;
    
    bool stop = false;
    
    do{
    cout << "The number of Pattern is look like: \n\n";

    for ( i = 1; i <= 5; i++) {
        for ( j = 1; j <= 5; j++) {
            cout <<j<< " ";
        }
         
        cout << endl;
    }
    cout<<"\nEnter 0 to exit or Enter 1 to continue: ";
    cin>>stop;
    }while(stop != 0);

    return 0;	
}
