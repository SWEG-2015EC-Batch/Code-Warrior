                problem analysis 
The problem is to develop a program that enables the user to carry out different tasks on a specified number according to their preference. 
The program should offer choices such as reversing the number, counting its digits, calculating the sum of its digits, 
finding the product of even digits, swapping the first and last digit, 
checking if it is a palindrome, displaying the frequency of digits, checking if it is an Armstrong, Strong, or Perfect number, and exiting the program.
        
     pseudocode :

step 1. Start the program

step2. Initialize variables: num, reverse, temp, n, last_digit, first_digit, power, sum, product, counter, originalNum, factorial, sumOfDivisors

step 3. Display the menu with options 0 to 10

step 4. Repeat until the user chooses to exit (option 0):

step 5. Read the user's choice

step 6. Switch based on the user's choice:

- Case 1: Reverse of a number
- Read num 
- Set reverse = 0 
- While num > 0:
- Calculate temp, update reverse and num
- Display reverse

-  Case 2: Digit counter 
- Read num 
- Set counter = 0 
- While num > 0: 
- Calculate temp, update counter and num
- Display counter 
- Case 3: Sum of digits - Read num - Set sum = 0 
- While num > 0: 
- Calculate temp, update sum and num 
- Display sum 
- Case 4: Product of even digits - Read num - Set product = 1 
- While num > 0: 
- Calculate temp, update product and num (if temp is even) 
- Display product
 - Case 5: Swap the first and last digit
 - Read num 
- Initialize last_digit, temp, first_digit, power - Calculate last_digit, temp, first_digit, power 
- Calculate swapped_num 
- Display swapped_num
 - Case 6: Check if a number is palindrome 
- Read num 
- Initialize reverse, temp, n 
- Calculate reverse, temp, n
 - Display result 
- Case 7: Frequency of digit 
- Read num 
- Initialize freq array - While num > 0: - Update freq array and num - Display frequency table 
- Case 8: Check if a number is Armstrong 
- Read num 
- Initialize originalNum, sum 
- Calculate digit, update sum and num 
- Display result
 - Case 9: Check if a number is Strong 
- Read num 
- Initialize originalNum, sum
 - Calculate digit, factorial, update sum and num 
- Display result
 - Case 10: Check if a number is Perfect - Read num 
- Initialize sumOfDivisors 
- Calculate sumOfDivisors, update num 
- Display result 
- Case 0: Exit - Display "Exiting program."
 - Default: Display "Invalid choice. Please try again." 

step 7. End of switch

step 8. stop
  
          Flow chart 
```mermaid 
graph TD
    A[Start] --> B[Choose an option]
    B --> |Option 1| C[Reverse of a number]
    C --> D[Initialize num, reverse, temp]
    D --> E[Enter the number you want to reverse]
    E --> F[While num > 0]
    F --> |Yes| G[Calculate temp, update reverse and num]
    G --> F
    F --> |No| H[Display reverse]
    H --> B
     B --> |Option 2| I[Digit counter]
    I --> J[Initialize num, temp, counter]
    J --> K[Enter a number]
    K --> L[While num > 0]
    L --> |Yes| M[Calculate temp, update counter and num]
    M --> L
    L --> |No| N[Display counter]
    N --> B
    B --> |Option 3| O[Sum of digits]
    O --> P[Initialize num, temp, sum]
    P --> Q[Enter a number]
    Q --> R[While num > 0]
    R --> |Yes| S[Calculate temp, update sum and num]
    S --> R
    R --> |No| T[Display sum]
    T --> B
    B --> |Option 4| U[Product of even digits]
    U --> V[Initialize num, temp, product]
    V --> W[Enter a number]
    W --> X[While num > 0]
    X --> |Yes| Y[Calculate temp, update product and num]
    Y --> X
    X --> |No| Z[Display product]
    Z --> B
    B --> |Option 5| AA[Swap the first and last digit]
    AA --> AB[Initialize num, last_digit, temp, first_digit, power]
    AB --> AC[Enter a number]
    AC --> AD[Calculate last_digit, temp, first_digit, power]
    AD --> AE[Calculate swapped_num]
    AE --> AF[Display swapped_num]
    AF --> B
    B --> |Option 6| AG[Check if a number is palindrome]
    AG --> AH[Initialize num, reverse, temp, n]
    AH --> AI[Enter a number]
    AI --> AJ[While n > 0]
    AJ --> |Yes| AK[Calculate temp, update reverse and n]
    AK --> AJ
    AJ --> |No| AL[Display result]
    AL --> B
    B --> |Option 7| AM[Frequency of digit]
    AM --> AN[Initialize num, freq array]
    AN --> AO[Enter a number with a minimum of 9 digits]
    AO --> AP[While num > 0]
    AP --> AQ[Update freq array and num]
    AQ --> AP
    AP --> AR[Display frequency table]
    AR --> B
    B --> |Option 8| AS[Check if a number is Armstrong]
    AS --> AT[Initialize num, originalNum, sum]
    AT --> AU[Enter a number]
    AU --> AV[While num > 0]
    AV --> AW[Calculate digit, update sum and num]
    AW --> AV
    AV --> AX[Display result]
    AX --> B
    B --> |Option 9| AY[Check if a number is Strong]
    AY --> AZ[Initialize num, originalNum, sum]
    AZ --> BA[Enter a number]
    BA --> BB[While num > 0]
    BB --> BC[Calculate digit, factorial, and update sum and num]
    BC --> BB
    BB --> BD[Display result]
    BD --> B
    B --> |Option 10| BE[Check if a number is Perfect]
    BE --> BF[Initialize num, sumOfDivisors]
    BF --> BG[Enter a number]
    BG --> BH[While i <= num / 2]
    BH --> |Yes| BI[Update sumOfDivisors]
    BI --> BH
    BH --> |No| BJ[Display result]
    BJ --> B
    B --> |Option 0| BK[End]
    ```
