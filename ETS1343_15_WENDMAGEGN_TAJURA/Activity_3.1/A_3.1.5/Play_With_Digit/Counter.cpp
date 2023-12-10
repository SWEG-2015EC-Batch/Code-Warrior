#include<iostream>
using namespace std;
int main(){
    int num, temp, digit;
    int count = 0;
    
    cout<<"Please, enter the number: ";
    cin>>num;
    while(num>0){
        
        temp = num%10;
        num = num/10;
        count ++;
    }
    
    cout<<"\nThe Counted Digit number is: ";
    cout<<count;
    return 0;
    }
