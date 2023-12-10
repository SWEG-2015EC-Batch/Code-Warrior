#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int sum, firstDigit, lastDigit;
    long long num;
    bool stop = false;
    
    do{
    cout<<"Enter the number: ";
    cin>>num;
    //Extract the last digit from the input digit.
    lastDigit = num % 10;
    //Find the number of the digit.
    while(num >= 10){
        num = num / 10;
    }
    // Find the first digit from the entered number.
        firstDigit = num;
        sum = firstDigit + lastDigit;
        //Print the result of the required.
   cout<<"The first digit is: ";
   cout<<firstDigit;
   cout<<"\nThe last digit is: ";
   cout<<lastDigit;
   cout<<"\nThe sum of the first and the last digit is: ";
   cout<<sum;
   
   cout<<"\nEnter 0 to exit or enter 1 to contineu: ";
   cin>>stop;
    }while(stop != 0);
    
    return 0;
}
