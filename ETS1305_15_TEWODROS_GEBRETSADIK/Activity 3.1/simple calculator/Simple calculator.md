        Problem analysis 
input = number 1 and number 2 

output = result

        process 

-if the user choose '+' result = number 1 + number 2 

-if the user choose '-' result = number 1 - number 2 

-if the user choose '*' result = number 1 * number 2 

-if the user choose '/' and if number 2 != 0 result = number 1 / number 2 

-if the user choose '%' and if number 2 != 0 result = number 1 % number 2 

         pseudo code

step 1 = start 

step 2 = read num1,num2 and operator 

step 3 =if operator = '+' result = num1 + num2 else go to  step 4

step 4 =if operator = '-' result = num1 - num2 else go to  step 5
 
step 5 =if operator = '*' result = num1 * num2 = else go to  step 6

step 6 =if operator = '/' go to step 7

step 7 = if num2 !=0 result = num1 / num2 = else go to  step 10  else go to 8

step 8 step 8 = if operator = '%' go to step 9

step 9 = if num2 !=0 result = num1 % num2 = else go to step 10 

step 10 = print num2 = 0 so opration can't continue. 

step 11 = print result. 

step 12 = stop.

     flowchart  
```mermaid 
  graph TD
A(Start) --> B[/Read num1, num2 and operator/]
B --> C{Is operator '+'}
C -- Yes --> D[Result = num1 + num2]
C -- NO --> E{Is operator '-'}
E -- Yes --> F[Result = num1 - num2]
E -- NO --> G{Is operator '*'}
G -- Yes --> H[Result = num1 * num2]
G -- No --> I{Is operator '/'}
I -- Yes --> J{Is num2 != 0}
J -- Yes --> K[Result = num1 / num2]
J -- No --> L[Division cant continued due to number 2 = 0]
I -- No --> M{Is operator '%'}
M -- Yes --> N{Is num2 !=0}
N -- Yes --> O[Result = num1 % num2]
N -- No --> P[Module can't continued due to number 2 = 0]
M -- No --> Q[Make sure to enter among'+, -, *, /, %']
Q --> S(Stop)
D --> R[/Print result/]
F --> R[/Print result/]
D --> R[/Print result/]
H --> R[/Print result/]
K --> R[/Print result/]
L --> R[/Print result/]
O --> R[/Print result/]
P --> S
R --> S
  ```
