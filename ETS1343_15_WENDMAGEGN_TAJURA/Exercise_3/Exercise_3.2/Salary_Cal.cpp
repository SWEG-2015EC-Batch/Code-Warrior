//Salary Calculator program
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int weeklyHrs;
    float baseSalary, bonusRate, incomeTax, bonusPayment = 0.0;
    int stop;
    do{
        cout<<"Please, Enter your Base Salary: ";
        cin>>baseSalary;

        cout<<"please, enter Weekly Working Hours: ";
        cin>>weeklyHrs;

        if (weeklyHrs > 40){
            cout<<"Enter Bonus Rate: ";
            cin>>bonusRate;
            bonusPayment = weeklyHrs * bonusRate;

        }
    //Calculate the Gross Salary, Pension, Income Tax, and Net Salary
        float grossSalary = baseSalary + bonusPayment;
        float pension = baseSalary * 0.07;
        if (grossSalary >= 3000){
            incomeTax = grossSalary * .3;
        }
        else if (grossSalary >= 2000){
            incomeTax = grossSalary * .25;
        
        }
        else if (grossSalary >= 1200){
            incomeTax = grossSalary * .2;
        
        }
        else if (grossSalary >= 600){
            incomeTax = grossSalary * .15;
        
        }
        else if (grossSalary >= 200){
            incomeTax = grossSalary * .1;
        
        }
        else {
            incomeTax = 0.0;
        }
    //Print All the necessary out put
        float netSalary = grossSalary - incomeTax - pension;
        cout <<"Gross Salary: $"<< fixed << setprecision(2) << baseSalary + bonusPayment  << endl;
        cout <<"Bonus Payment: $"<< bonusPayment << endl;
        cout <<"Income Tax: $"<< incomeTax <<endl;
        cout <<"Pension: $"<< pension <<endl;
        cout <<"Net Salary: $"<< netSalary <<endl;

        //make a choice the program to exit or continue
        cout<<"Press 0 or any key EXCPET Numbers to exit:";
        cout<<"\nAND press any Numbers key EXCPET Zero (0) to continuee .... ";
        cin>>stop;
        
    }while(stop != 0);
    return 0;
}
