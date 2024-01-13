#include<iostream>
using namespace std;
int main(){
    int i, n;
    cout<<"How many Data do you want to enter: ";
    cin>>n;
    cout << "Enter the data for " << n << " ways:\n";
    int data[n];
    for ( i = 0; i < n; i++)
    {
        cout<<"Data "<<i+1<<": ";
        cin>>data[i];
    }
    cout<<"The enterred Data is: \n";
    for ( i = 0; i < n; i++){
        cout<<data[i]<<"  ";
    }
    cout<<"\n\nThe Even Data in reverse order:\n";
    cout<<"----------------------\n";
    for ( i = n-1; i >=0 ; i--){
        if (data[i]%2==0){
                cout<<data[i]<<"  ";
            
        } 
    }
    cout<<endl;
    cout<<"\nSorry! You had not any Even data: ";
    
    return 0;
}
