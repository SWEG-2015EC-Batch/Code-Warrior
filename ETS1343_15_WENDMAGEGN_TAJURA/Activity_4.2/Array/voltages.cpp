#include<iostream>
using namespace std;
int main(){
    float volts[4][3]= {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59 };
    cout<<"The voltages are: \n";
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cout<<volts[i][j]<<" \t";
        }
        cout<<endl;

    }
    return 0;
}
