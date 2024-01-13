#include<iostream>
using namespace std;
int main(){
    int total=0, n, temp[8];
    cout<<"Enter 8 elements of Number:\n";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter the data: ";
        cin>>temp[i];
         
        total +=temp[i];  
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<temp[i]<<", ";
        
    }
    cout<<"\nThe Total Number is: ";
    cout<<total;
    return 0;
}
