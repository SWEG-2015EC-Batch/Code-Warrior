#include <iostream>
#include <vector>
using namespace std;
#define SALSE_ROWS 10
#define SALSE_COLUMN 10
int main(){
    double sales[SALSE_ROWS 10][SALSE_COLUMN 10];
    int rows, cols;
    double sum =0;
    cout<<"Enter no.of rows: ";
    cin>>rows;
    cout<<"\nEnter no. of cols: ";
    cin>>cols;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
 //user input element of row x col 
           cout<<"Enter value for ROW "<<i<<" , "<<"COL "<<j<<" : ";
           cin>>sales[i][j];
        }
    }
    sum = sales[0][0] + sales[1][2] + sales[2][3];
    cout<<sum;
