#include<iostream>
#define NUM 3
#define NUMS 4
using namespace std;

int main() {
    int i, j;
    int data[NUM][NUMS];
    cout<<"Enter the Data:\n";
    for(i=0; i<NUM; i++){
        for(j=0; j<NUMS; j++){
            cout<<"The data of NUMBERS("<<i+1<<", "<<j+1<<"): ";
            cin>>data[i][j];
        }
        cout<<endl;
    }
    cout<<"The Inputted Datas are Even NUmbers: \n";
    int sum=0;
        for(i=0; i<NUM; i++){
            for(j=0; j<NUMS; j++){
                if(data[i][j]%2==0){
                    sum += data[i][j];
                cout<<data[i][j]<<" ";
                }else{
                    cout<<"*  ";
                }
            }
            cout<<endl;
        }
        cout<<"The SUM of Even NUMBERS are: ";
        cout<<sum;
    
    return 0;
}
