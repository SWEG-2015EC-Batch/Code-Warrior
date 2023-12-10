#include<iostream>
using namespace std;
int main(){
    int num, temp;
    int reverse = 0;
    
    cout<<"Please, enter the number: ";
    cin>>num;
    while(num>0){
        
        temp = num % 10;
        reverse = (reverse*10) + temp;
        num = num/10;
    }
    cout<<"The Reversed number is: ";
    cout<<reverse;
    return 0;
    }
