#include <iostream>
#include<cmath>
using namespace std;

//Check the entered number is perefect or not.
int main(){
    int i, num, temp, sum = 0;
     bool exit = false;
     
     //Make the program is optional
    do{
    cout << "Enter a Number Digit: ";
    cin >> num;
    temp = num;
    //It
     for( i = 1; i <= num/2; i++){
        if(num % i == 0){
            sum += i;
        }
     }
    
    if(sum == num){
        cout<<num<<" Is Perfect Number";
    }else{
        cout<<num<<" Is Not a Perfect Number.";
    }
    
    cout<<"\nEnter 0 to exit or enter 1 to Continue: ";
    cin>>exit;
    }while(exit != 0);

    return 0;
}
