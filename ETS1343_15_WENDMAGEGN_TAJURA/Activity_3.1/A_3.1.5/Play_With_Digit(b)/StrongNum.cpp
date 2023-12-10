#include <iostream>
using namespace std;

int main(){
    int num, temp, sum = 0;
    bool exit = false;
    
    do{
    cout << "Enter a number to check if it's a Strong number or Not: ";
    cin >> num;
    temp = num;
    
// Function to calculate the factorial of a number

    while (temp > 0) {
        int factorial = 1;
        int digit = temp % 10;
        
        for(int i = 1; i <= digit; i++){
    // Calculate factorial of each digit
            factorial *= i;
        }
        sum += factorial;
        temp /= 10;
    }
    
//Check the input digit is satisfy the condition.
    if (sum == num) {
        cout << num<< " is a Strong number." << endl;
    } else {
        cout << num << " is not a Strong number." << endl;
    }
    //Make the program optional
    cout<<"Enter 0 to exit or enter 1 to continue: ";
    cin>>exit;
    }while(exit !=0);

    return 0;
}
