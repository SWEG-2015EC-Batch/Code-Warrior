#include<iostream>
using namespace std;
int main(){
    int i, n;
    cout<<"How many Data do you want? n= ";
    cin>>n;
    int arr_1[n], arr_2[n];
    cout<<"Enter the data for the first array:\n";
    for ( i = 0; i < n; i++)
    {
        cout<<"Data_1 "<<i+1<<": ";
        cin>>arr_1[i];
    }
    cout<<"\n Enter the Data for the second array: \n";
    for ( i = 0; i < n; i++)
    {
        cout<<"Data_2 "<<i+1<<": ";
        cin>>arr_2[i];
    }
    cout<<endl;
    cout<<"The first Array"<<" \t"<<"The secod Array\n";
    for ( i = 0; i < n; i++)
    {
        cout<<arr_1[i]<<"\t\t\t";
        cout<<arr_2[i]<<endl;
    }
    cout<<endl;
    if (arr_1[i]==arr_2[i])
    {
        cout << "The arrays are identical.\n";
    }
    else
    {
        cout << "The arrays are not identical.\n";
    }
    
    cout<<endl;
    return 0;
}
