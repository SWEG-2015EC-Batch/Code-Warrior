#include <iostream>
#include <vector>
using namespace std;

int main(){
double balances[4][6] = {56.3, 67.3, 34.2, 55.0, 67.5, 68.0, 56, 7.3, 86.3, 46., 83.5, 75.6, 37.9, 68.9 };
    cout<<"The Size of the Array: ";
    cout<<sizeof(balances)/6<<endl;
    cout<<"The Balances: "<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<6; j++){
            cout<<balances[i][j]<<" \t";
        }
        cout<<endl;
    }
    float mark[3][4] = {60, 73.5, 57.25, 80, 41.8, 67, 89, 54};
    cout<<"The Size of the Array: ";
    cout<<sizeof(mark)/4<<endl;
    cout<<"The Marks: "<<endl;
    for(int i=0; i<sizeof(mark)/sizeof(mark[0]); i++){
        for(int j=0; j<sizeof(mark)/sizeof(mark[0]); j++){
            cout<<mark[i][j]<<" \t";
        }
        cout<<endl;
    }
    int age[3][4] = {{26, 37, 16}, {24, 20, 18, 48}, {60, 33, 80} };
    cout<<"\nThe Size of the Array: ";
    cout<<sizeof(age)/4<<endl;
    cout<<"The Age of the person: "<<endl;
    for(int i=0; i<sizeof(age)/sizeof(age[0]); i++){
        for(int j=0; j<sizeof(age)/sizeof(age[0]); j++){
        cout<<age[i][j]<<" \t";
        }
        cout<<endl;
    }
    
    return 0;
}
