#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main(){
  
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
return 0;
}
