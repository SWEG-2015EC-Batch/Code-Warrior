#include<iostream>
using namespace std;
int main(){
    int gross_salary, worked_hours;
    float income_tax, pension, bonus_rate, net_salary, income_tax_rate, over_time_payment;
    cout<<"Enter Gross Salary: ";
    cin>>gross_salary;
    cout<<"Enter Worked Hour: ";
    cin>>worked_hours;
    cout<<"Enter income tax rate: ";
    cin>>income_tax_rate;
    cout<<"Enter over-time bonus rate/hour: ";
    cin>>bonus_rate;
     
    income_tax = gross_salary * income_tax_rate;
    pension = gross_salary * 0.07; 
    if (worked_hours > 40)
    {
        over_time_payment = (worked_hours-40)*bonus_rate;
    }
    
    net_salary =  (gross_salary -(income_tax + pension) ) + over_time_payment;
    cout<<"net salary = "<<net_salary;
   return 0; 
}
