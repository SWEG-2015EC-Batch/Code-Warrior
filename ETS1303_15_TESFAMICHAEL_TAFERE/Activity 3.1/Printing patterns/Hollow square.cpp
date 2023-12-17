//Printing a hollow square
//By Tesfamichael 
#include <iostream>
using namespace std;

int main()
{
    int j, i, n=5;
    
    for(i=1; i<=n; ++i){
    for(j=1; j<=n; ++j){
        
        if(i ==1 || i == n || j == 1 || j == n){
        cout<<"* ";
        }else{
            cout<<"  ";   
    }
    }
    cout<<endl;
    }
    return 0;
}
