#include <iostream>
using namespace std;

int main() {
    char i, j;
    
    bool stop = false;
    
    do{
    cout << "An Alphabets of Pattern is look like: \n\n";

    for ( i = 'a'; i <= 'e'; i++) {
        for ( j = 'a'; j <= 'e'; j++) {
            cout <<j<< " ";
        }
         
        cout << endl;
    }
    cout<<"\nEnter 0 to exit or Enter 1 to continue: ";
    cin>>stop;
    }while(stop != 0);

    return 0;	
}
