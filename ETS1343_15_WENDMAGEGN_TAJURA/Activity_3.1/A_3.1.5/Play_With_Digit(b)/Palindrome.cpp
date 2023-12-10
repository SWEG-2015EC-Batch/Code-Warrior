#include<iostream>
// Function to check if a number is a palindrome
using namespace std;

int main() {
    int num, reverseNum, digit;
    
    bool stop = false;
    
    do{
        reverseNum = 0;
        
    cout << "Enter a number to check if it's a palindrome: ";
    cin >> num;
    // Preserve the original input
    int number = num;
    
    while(num>0){
        digit = num % 10;
        reverseNum = (reverseNum*10) + digit;
        num /= 10;
    }
     // Compare the original input with the reversed number to determine if it's a palindrome
    if (reverseNum == number) {
        cout << number<< " is a palindrome." << endl;
    } else {
        cout << number<< " is not a palindrome." << endl;
    }
    
    cout<<"Enter 0 to Exit and Enter any number to continue.";
    cin>>stop;
    }while(stop != 0);

    return 0;
}
