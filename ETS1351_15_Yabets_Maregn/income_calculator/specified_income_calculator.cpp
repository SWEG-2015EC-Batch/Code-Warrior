#include<iostream>
using namespace std;
int main(){
    int gross_salary, worked_hours;
    float income_tax, pension, bonus_rate, net_salary, income_tax_rate, over_time_payment;
    cout<<"Enter Gross Salary: ";
    cin>>gross_salary;
    cout<<"Enter Worked Hour: ";
    cin>>worked_hours;
    cout<<"Enter over-time bonus rate/hour: ";
    cin>>bonus_rate;
     
     if (gross_salary<200)
    {
        income_tax_rate = 0;
        income_tax = gross_salary * income_tax_rate; 
    }
    else if (gross_salary >=200 && gross_salary<600)
    {
        income_tax_rate = 0.1;
        income_tax = gross_salary * income_tax_rate;
    }
    else if (gross_salary >=600 && gross_salary<1200)
    {
        income_tax_rate = 0.15;
        income_tax = gross_salary * income_tax_rate;
    }
    
    else if (gross_salary >=1200 && gross_salary<2000)
    {
        income_tax_rate = 0.2;
        income_tax = gross_salary * income_tax_rate;
    }
    else if (gross_salary >=2000 && gross_salary<3500)
    {
        income_tax_rate = 0.25;
        income_tax = gross_salary * income_tax_rate;
    }
    else{
        income_tax_rate = 0.30;
        income_tax = gross_salary * income_tax_rate;
    }
    pension = gross_salary * 0.07; 
    if (worked_hours > 40)
    {
        over_time_payment = (worked_hours-40)*bonus_rate;
    }
    
    net_salary =  (gross_salary -(income_tax + pension) ) + over_time_payment;
    cout<<"net salary = "<<net_salary;
  return 0;  
}
