
       input = gross salary, worked hour, bonus rate and income tax rate.
       process = income tax  = gross salary * income tax rate
               = pension = gross salary * 0.07
               = check whether worked hour > 40.
               if worked hour > 40 then over time payment = (worked_hours-40)*bonus rate
               if it doesn't over time payment = 0;
               net_salary =  (gross_salary -(income_tax + pension) ) + over_time_payment
       output = net salary
