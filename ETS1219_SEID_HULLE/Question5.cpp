
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    const float PENSION_RATE = 0.05; 
    const float TAX_RATE = 0.15;     
    string employeeName;
    float bonusRate, baseSalary;
    int weeklyHours;
    
    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter weekly working hours: ";
    cin >> weeklyHours;

    cout << "Enter bonus rate per hour: ";
    cin >> bonusRate;

    cout << "Enter base salary: ";
    cin >> baseSalary;

    double grossSalary = baseSalary + (weeklyHours * bonusRate);
    double bonusPayment = weeklyHours * bonusRate;
    double pensionDeduction = grossSalary * PENSION_RATE;
    double taxDeduction = grossSalary * TAX_RATE;
    double netSalary = grossSalary - pensionDeduction - taxDeduction;

    cout << "\nGross Salary: " << fixed << setprecision(2) << grossSalary << " birr" << endl;
    cout << "Bonus Payment: " << fixed << setprecision(2) << bonusPayment << " birr" << endl;
    cout << "Net Salary: " << fixed << setprecision(2) << netSalary << " birr" << endl;

return 0;
}
