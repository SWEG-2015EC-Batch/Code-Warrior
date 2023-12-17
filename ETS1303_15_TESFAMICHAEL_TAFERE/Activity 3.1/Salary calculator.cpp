//Salary calculator
//By Tesfamichael 
#include <iostream>
using namespace std;

int main() {
    
    float grossSalary, workedHours, pensionRate, overtimeRate, netSalary, overtimePayment, taxRate, incomeTax;

    cout << "Enter Gross Salary: $";
    cin >> grossSalary;

    cout << "Enter Worked Hours: ";
    cin >> workedHours;

    
    if (workedHours > 40) {
        cout << "Enter Overtime Rate per Hour: $";
        cin >> overtimeRate;

        
        overtimePayment = (workedHours - 40) * overtimeRate;
    } else {
        overtimePayment = 0;
    }

    
    if (grossSalary <= 200) {
        taxRate = 0;
    } else if (grossSalary <= 600) {
        taxRate = 0.10;
    } else if (grossSalary <= 1200) {
        taxRate = 0.15;
    } else if (grossSalary <= 2000) {
        taxRate = 0.20;
    } else if (grossSalary <= 3500) {
        taxRate = 0.25;
    } else {
        taxRate = 0.30;
    }

    
    pensionRate = 0.07;
    double pension = grossSalary * pensionRate;

    
    incomeTax = grossSalary * taxRate;

    
    netSalary = (grossSalary - pension - incomeTax) + overtimePayment;

    
   
    cout << "\nGross Salary: $" << grossSalary << endl;
    cout << "Pension Deduction: $" << pension << " (7% of Gross Salary)" << endl;
    cout << "Income Tax Deduction: $" << incomeTax << " (" << (taxRate * 100) << "% of Gross Salary)" << endl;
    cout << "Overtime Payment: $" << overtimePayment << endl;
    cout << "Net Salary: $" << netSalary << endl;

    return 0;
}
