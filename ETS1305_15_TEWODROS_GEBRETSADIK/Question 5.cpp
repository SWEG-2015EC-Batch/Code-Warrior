// using c++ to calculate employer of salary 
#include <iostream>
#include <string>
using namespace std;
int main() {
    std::string employee_name;
    int weekly_working_hours;
    double bonus_rate_per_hour, base_salary, gross_salary, net_salary, bonus_payment, pension_amount, tax_amount;
cout << "Enter employee name: ";
cin >> employee_name;
cout << "Enter weekly working hours: ";
cin >> weekly_working_hours;
cout << "Enter bonus rate per hour: ";
cin >> bonus_rate_per_hour;
cout << "Enter base salary: ";
cin >> base_salary;
 gross_salary = (weekly_working_hours * bonus_rate_per_hour) + base_salary;
    pension_amount = 0.05 * gross_salary;
    tax_amount = 0.15 * gross_salary;
    net_salary = gross_salary - (pension_amount + tax_amount);
    bonus_payment = weekly_working_hours * bonus_rate_per_hour;

    std::cout << "Employee Name: " << employee_name <<endl;
    std::cout << "Gross Salary: " << gross_salary <<endl;
    std::cout << "Net Salary: " << net_salary <<endl;
    std::cout << "Bonus Payment: " << bonus_payment <<endl;

    return 0;
}
