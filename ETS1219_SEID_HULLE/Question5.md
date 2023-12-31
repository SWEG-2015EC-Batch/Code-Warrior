![image](https://github.com/SWEG-2015EC-Batch/Code-Warrior/assets/149233683/b0399c66-638f-4e79-838c-952b7f88531c)

Problem Analysis:

The problem is to develop a program that reads an employee's name, weekly working hours, bonus rate per hour, and base salary. The program needs to calculate and display the employee's gross salary, net salary, and bonus payment, considering a pension rate of 5% and a tax rate of 15%. The key components of the problem include:

Input:

Prompt the user to input the employee's name. Prompt the user to input the weekly working hours. Prompt the user to input the bonus rate per hour. Prompt the user to input the base salary. Validation:

Ensure that the entered values for weekly working hours, bonus rate per hour, and base salary are valid numerical values. Calculation:

Calculate the gross salary as the sum of the base salary and the product of weekly working hours and bonus rate per hour. Calculate the bonus payment as the product of weekly working hours and bonus rate per hour. Calculate the pension deduction as a percentage (5%) of the gross salary. Calculate the tax deduction as a percentage (15%) of the gross salary. Calculate the net salary as the difference between the gross salary and the sum of pension and tax deductions. Output:

Display the employee's name, gross salary, bonus payment, pension deduction, tax deduction, and net salary. Algorithm Design:

Input:

Prompt the user to input the employee's name. Prompt the user to input the weekly working hours. Prompt the user to input the bonus rate per hour. Prompt the user to input the base salary. Validation:

Ensure that the entered values for weekly working hours, bonus rate per hour, and base salary are valid numerical values. Calculation:

Calculate gross salary = base salary + (weekly working hours * bonus rate per hour). Calculate bonus payment = weekly working hours * bonus rate per hour. Calculate pension deduction = 5% of gross salary. Calculate tax deduction = 15% of gross salary. Calculate net salary = gross salary - (pension deduction + tax deduction). Output:

Display the employee's name, gross salary, bonus payment, pension deduction, tax deduction, and net salary.

pseudocode:

1.Display("Enter employee name:")

2.Input employeeName

3.Display("Enter weekly working hours:")

4.Input weeklyHours

5.Validate weeklyHours is a valid numerical value

6.Display("Enter bonus rate per hour:")

7.Input bonusRate

8.Validate bonusRate is a valid numerical value

9.Display("Enter base salary:")

10.Input baseSalary

11.Validate baseSalary is a valid numerical value

12.Calculate grossSalary = baseSalary + (weeklyHours * bonusRate)

13.Calculate bonusPayment = weeklyHours * bonusRate

14.Calculate pensionDeduction = 0.05 * grossSalary // 5% of gross salary

15.Calculate taxDeduction = 0.15 * grossSalary // 15% of gross salary

16.Calculate netSalary = grossSalary - (pensionDeduction + taxDeduction)

17.Display("Employee Name:", employeeName)

18.Display("Gross Salary:", grossSalary)

19.Display("Bonus Payment:", bonusPayment)

20.Display("Pension Deduction:", pensionDeduction)

21.Display("Tax Deduction:", taxDeduction)

22.Display("Net Salary:", netSalary)
