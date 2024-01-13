#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    int i, j, n;
    cout << "Enter the Number of Strings: ";
    cin >> n;
    cin.ignore(); // clear the input buffer

    string fullName[n], temp;
    cout<<"Please, Enter your full Name:\n";
    cout<<"---------------------------------\n";
    for(i=0; i<n; i++){
        cout<<"Enter "<<i+1<<": ";
        getline(cin, fullName[i]);  
    }
    for(i=0; i<n; i++){
        for(j= i+1; j< n; j++){
            if(fullName[i]>fullName[j]){
                temp=fullName[i];
                fullName[i]=fullName[j];
                fullName[j]=temp;
            }
        }
    }
    cout<<"---------------------------------\n";
    cout<<"     In Alphabetical Order: \n";
    for(i=0; i<n; ++i){
        cout<<"Name " <<i+1<<": "<<fullName[i]<<endl;
    }
    cout<<"---------------------------------\n";
    return 0;
}
