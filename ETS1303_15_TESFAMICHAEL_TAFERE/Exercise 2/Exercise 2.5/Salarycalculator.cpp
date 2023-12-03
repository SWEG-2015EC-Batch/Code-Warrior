//A program that calcutedthe gross salary , net salary and bonus payment.
//By Tesfamichael 
#include <iostream>
using namespace std;

int main()
{
    const float penshionRate = 0.05, taxRate = 0.15;
    float weeklyWorkingHours, bonusRatePerHour, baseSalary, grossSalary, netSalary, bonusPayment, penshion, incomeTax;
    string employeeName;
    
    cout <<"Enter your name: ";
     cin>>employeeName;
    cout <<"Enter your weekly working hours: ";
     cin>>weeklyWorkingHours;
    cout<<"bonus rate per hour:";
     cin>>bonusRatePerHour;
     cout<<"Enter your base salary: ";
     cin>>baseSalary;
    
   bonusPayment = weeklyWorkingHours * bonusRatePerHour;
    grossSalary = baseSalary + bonusPayment;
    
    penshion = grossSalary * penshionRate;
    incomeTax = grossSalary * taxRate;
    netSalary = (grossSalary - penshion -incomeTax);
    
    cout<<"Your bonus payment is "<<bonusPayment<<endl;
    cout<<" Your gross salary is "<<grossSalary<<endl;
    cout<<"Your net salary is "<<netSalary<<endl;
    
    return 0;
}
   
    
    
    

