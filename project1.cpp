#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main(){
    float wight, hight, BMI;
        cout <<"Please enter the wight of a peson ";
        cin >>wight;
        cout <<"Please enter the hight of a person ";
        cin >>hight;

        BMI = (wight)/(hight*hight);
        cout << "The BMI of the person is: " <<BMI <<" Kg/m^2";




        //Prompt the user to input the capacity in gallons of the fuel tank
        float tankCapacity, milePerGallon, numMile;
        milePerGallon = 0.0;
        cout <<"Please enter the tank capacity of the fuel: ";
        cin >>tankCapacity;
        //Prompt the user to input the miles per gallon the automobile can be driven
        cout <<"Please enter the mile per gallon: ";
        cin >>milePerGallon;
        //Calculate the total number of miles the automobile can be driven without refueling
        numMile = milePerGallon * tankCapacity;
        cout <<"The number of mile of the automobile is: " <<numMile;




        char letter;
        // Prompt for input
        cout <<"Please enter the letter by using your keyboard ";
        // Receive Input
        cin >>letter;
        // Convert to Uppercase or Lowercase
        if (isalpha(letter)) {
            char uppercaseLetter = toupper(letter);
            char lowercaseLetter = tolower(letter);
            // Output Result
            cout <<"Upper letter: " <<uppercaseLetter <<"\n";
            cout <<"Lower letter: " <<lowercaseLetter <<"\n";

        } else {
            cout <<" Invalid input, Please enter the letter by using your keyboard ";
        }




        float x, y, result;
       
        cout <<"Enter the x value ";
        cin >>x;
        cout <<"Enter the y value ";
        cin >>y;
        result = pow(x, y);
        cout <<"The  result of the expression is: \n" <<x <<"^" <<y << " = " <<result;




        string employeeName;
        
        double weeklyHours, baseSalary;
        double overtimeHour, bonusPayment, bonusRate;
        int hrsWorked;
        //promt for input
        cout << "Enter the employee's name: ";
        cin >>employeeName;
        cout << "Enter weekly working hours: ";
        cin >> weeklyHours;
        cout << "Enter bonus rate per hour: ";
        cin >> bonusRate;
        cout << "Enter the base salary: \n";
        cin >> baseSalary;

        //calculate over time hours and bonus payment
        if (hrsWorked > 40){
            cout <<"Enter worked hours: ";
            cin >>hrsWorked;
            overtimeHour = hrsWorked - 40;
            bonusPayment = bonusRate * overtimeHour;
        }
        //calculate gross salary, net salary, tax rate, and pension

        double grossSalary = baseSalary + bonusPayment;
        double pension = 0.05 * grossSalary;
        double taxRate = 0.15 * grossSalary;
        double netSalary = grossSalary - (pension + taxRate);
        
        //output results
        cout << "Gross Salary: " <<grossSalary <<endl;
        cout << "Bonus Payment: " <<bonusPayment <<endl;
        cout << "Net Salary: " <<netSalary;




        const int transmission_speed = 960;
        int file_size;
        cout << "please enterbthe size of the file to be sent in bytes: ";
        cin >>file_size;
        //calculate transmission time
        double time_taken = static_cast<double>(file_size)/(transmission_speed);
        cout << "Estimated time to send the file: " <<time_taken << " seconds" <<endl;


        return 0;
}