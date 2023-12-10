#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int temp, num, product = 1;
    
    cout<<"Please, enter the number: ";
    cin>>num;
    while(num>0){
        
        temp = num % 10;
         if(temp%2 == 0){
            product = product * temp;
        }
        num = num/10;
        
    }
    cout<<"The Even number product is: ";
    cout<<product;
    return 0;
    }
