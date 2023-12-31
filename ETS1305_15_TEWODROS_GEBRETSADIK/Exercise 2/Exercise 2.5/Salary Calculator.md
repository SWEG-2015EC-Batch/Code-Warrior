Problem Analysis:
The program is designed to calculate the gross salary, net salary, and bonus payment for an employee based on their weekly working hours, bonus rate per hour, and base salary.
However, the program does not handle any error cases, such as negative values for working hours or bonus rate, which could lead to unexpected results or errors.

Algorithm Design:

1. Start step
2. Declare variables for weekly_working_hours (int), bonus_rate_per_hour (double), base_salary (double), gross_salary (double), net_salary (double), bonus_payment (double), pension_amount (double), and tax_amount (double).
3. Prompt the user to enter the employee name and store the input in the variable 'employee_name'.
4. Prompt the user to enter the weekly working hours and store the input in the variable 'weekly_working_hours'.
5. Prompt the user to enter the bonus rate per hour and store the input in the variable 'bonus_rate_per_hour'.
6. Prompt the user to enter the base salary and store the input in the variable 'base_salary'.
7. Calculate the gross_salary using the formula: (weekly_working_hours * bonus_rate_per_hour) + base_salary.
8. Calculate the pension_amount as 5% of the gross_salary.
9. Calculate the tax_amount as 15% of the gross_salary.
10. Calculate the net_salary as gross_salary - (pension_amount + tax_amount).
11. Calculate the bonus_payment as weekly_working_hours * bonus_rate_per_hour.
12. Display the employee's name, gross salary, net salary, and bonus payment.
13. stop.

 ![283974715-b0399c66-638f-4e79-838c-952b7f88531c](https://github.com/SWEG-2015EC-Batch/Code-Warrior/assets/149199747/482ed37f-c5bc-4d1a-88bf-172557e70c1e)



