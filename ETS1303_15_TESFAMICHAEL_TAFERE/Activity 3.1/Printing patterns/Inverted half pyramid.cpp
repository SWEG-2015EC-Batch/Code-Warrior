//Printing inverted half pyramid 
//By Tesfamichael 
#include <iostream>
using namespace std;

int main()
{
    int i, j, n=5;
    
    for(i=n; i>=1; i--)
    {
        for(j=i; j>0; j--){
        cout<<"*";
          }
          cout<<endl;
    }
    return 0;
}
