#include <iostream>
using namespace std;

int main() {
    int i, j;
    int num,
    bool stop = false;
    
    do{
        cout<<"Enter a Number: ";
        cin>>num;
    cout << "The number of Pattern is look like: \n\n";

    for ( i = 1; i <= num; i++) {
        for ( j = 1; j <= num; j++) {
            cout <<j<< " ";
        }
         
        cout << endl;
    }
    cout<<"\nEnter 0 to exit or Enter 1 to continue: ";
    cin>>stop;
    }while(stop != 0);

    return 0;	
}
