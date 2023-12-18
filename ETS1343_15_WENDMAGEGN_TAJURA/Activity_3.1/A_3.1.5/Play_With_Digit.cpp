#include <iostream>
#include<cmath>
#include<string>
#include<map>
using namespace std;

//Check the entered number is perefect or not.
int main(){
    int i, num, temp, sum = 0;
     bool exit = false;
     int choices;
     
     //Make the program is optional
    do{
        cout<<"Enter 1 to see Perfect Number: ";
        cout<<"Enter 2 to see Palindrome Number: ";
        cout<<"Enter 3 to see ArmStrong Number: ";
        cout<<"Enter 4 to see Frequency Number: ";
        cout<<"Enter 5 to see Strong Number: ";
        cout<<"Enter 6 to see Swap Number: ";
        cout<<"Enter 7 to see Counter Number: ";
        cout<<"Enter 8 to see Even Product Number: ";
        cout<<"Enter 9 to see Sum of the First and the Last Numbers: ";
        cout<<"Enter 10 to see Reverse Number: ";
        cout<<"Enter 11 to see Sum Number: ";
        cout<<"Enter Your choice: ";
        cin>>choices;
switch(choices){
    case 1:
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
    break;

    case 2:
    int reverseNum, digit;
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
    break;

    case 3:
    int numOfDigit;

        sum = 0;
        numOfDigit = 0;

        cout << "Enter a number to check if it's an Armstrong number: ";
        cin >> num;
        temp = num;

        // Count the number of digits
        while (temp != 0) {
            ++numOfDigit;
            temp /= 10;
        }

        temp = num; // Reset tempNum to the original number
        // Calculate the sum of the cubes of its digits
        while (temp != 0) {
            digit = temp % 10;
            sum += pow(digit, numOfDigit);
            temp /= 10;
        }

        // Check if the number is an Armstrong number
        if (sum == num) {
            cout << num << " is an Armstrong number." << endl;
        } else {
            cout << num << " is not an Armstrong number." << endl;
        }
        break;

        case 4:
        void digitFrequency(int num) {
    map<int, int> frequency;

    while (num > 0) {
        int digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }
//Use "\t" to oreder and form table format 
//"\t" useful to form space between to variables
    cout << "Digit\tFrequency" << endl;
    for (auto &entry : frequency) {
        cout << entry.first << "\t" << entry.second << endl;
    }
}
//main function to see the result on out put
    long long number;
    //Use do__while loop statement
    
    cout << "Enter an integer to find the frequency of each digit: ";
    cin >> number;

    digitFrequency(number);
    break;

    case 5:
    sum = 0;
    cout << "Enter a number to check if it's a Strong number or Not: ";
    cin >> num;
    temp = num;
    
// Function to calculate the factorial of a number

    while (temp > 0) {
        int factorial = 1;
        digit = temp % 10;
        
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
    break;

    case 6:
   // Swap the first and last digit
                int num;
                cout << "Enter a number: ";
                cin >> num;

                int last_digit, temp = num, first_digit, power = 1;

                last_digit = num % 10;
                temp = num;

                while (temp > 0) {
                    first_digit = temp % 10;
                    temp = temp / 10;
                    power = power * 10;
                }
                power = power / 10;

                int swapped_num = last_digit * power + num % (power);
                swapped_num = swapped_num - last_digit + first_digit;

                cout << "Number after swapping first and last digit: " << swapped_num << endl;
                break;
       
        case 7:

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
    break;

    case 8:
    int product = 1;
    
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
    break;

    case 9:
    int firstDigit, lastDigit;
    long long num;

    
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
   break;

   case 10:
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
    break;
    
    case 11:
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
    break;
    default:
    cout<<"Invalid choice! Please enter the correct choice."<<endl;
}
    cout<<"\nEnter 0 to exit or enter 1 to Continue: ";
    cin>>exit;
    }while(exit != 0);

    return 0;
}
