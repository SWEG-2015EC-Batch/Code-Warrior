#include <iostream>
using namespace std;

int main() {
    int i, j, pattern;
    bool stop = false;
    
    do{
        cout << "Enter the number of Pattern: ";
        cin >> pattern;
        
     for(i = 0; i<= pattern; ++i){
         for(j = 0; j < pattern ; ++j){
             if(i == 0 || i == pattern){
                 cout<<"* ";
             }
               else if(j == 0 || j == pattern -1) {
                   cout<<"* ";
               }
               else {
                   cout<<"  ";
               }
         }
         cout<<endl;
     }

    
    cout<<"Enter 0 to exit or Enter 1 to continue: ";
    cin>>stop;
    }while(stop != 0);

    return 0;	
}
