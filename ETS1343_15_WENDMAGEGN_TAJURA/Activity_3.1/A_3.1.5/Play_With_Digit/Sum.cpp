#include<iostream>
using namespace std;
int main(){
    int num, temp;
    int sum = 0;   
    cout<<"Please, enter the number: ";
    cin>>num;
    while(num>0){
        
        temp = num % 10;
        num = num/10;
        sum = sum + temp;
    }
    cout<<"The Sum of the number is: ";
    cout<<sum;
    return 0;
    }
