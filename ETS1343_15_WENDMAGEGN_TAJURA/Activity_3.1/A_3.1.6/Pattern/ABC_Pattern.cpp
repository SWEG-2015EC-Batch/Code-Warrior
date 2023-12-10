#include <iostream>
using namespace std;

int main() {
    char i, j, rows;
    
    bool stop = false;
    
    do{
        cout<<"Enter an Alphabet A upto Z: ";
        cin>>rows;
    cout << "An Alphabet of Pattern is look like: \n\n";

    for ( i = 'A'; i <= rows; i++) {
        for ( j = 'A'; j <= rows; j++) {
            cout <<j<< " ";
        }
         
        cout << endl;
    }
    cout<<"\nEnter 0 to exit or Enter 1 to continue: ";
    cin>>stop;
    }while(stop != 0);

    return 0;	
}
