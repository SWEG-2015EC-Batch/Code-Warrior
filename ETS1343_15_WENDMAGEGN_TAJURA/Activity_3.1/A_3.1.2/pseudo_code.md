****PSEUDO CODE****
Step(1):- START
Step(2):- Read num1, num2, operator;
Step(3):- process the input data validation (valid or not )
Step(4):- process by using SWITCH CASE:
Step(5):- process Sum, Subtract, Multiply;
Step(6):- Check the number is Divide, Modulo or Not; using if__else statement
Step(7):- Process Divide, and Modulo
Step(8):- Print the Operation Result
Step(9):- END

![20231204_101101](https://github.com/SWEG-2015EC-Batch/Code-Warrior/assets/149233683/545033f3-895f-48f3-8c4a-63080677b0a5)

![20231204_101110](https://github.com/SWEG-2015EC-Batch/Code-Warrior/assets/149233683/1ab09749-171d-43dd-85ee-b7272e38fa53)

##FLOW CHART
```mermaid
flowchart TB
    A(Start) --> B[/Enter a TWO number, num1 and num2, Read operator(+, -, *, /, %), /]
    B--> C[Process The input data validation]-->B
    C--> |NOT Valid|B[/Enter a TWO number, num1 and num2, Read operator(+, -, *, /, %)/]
    C--> D{Use Switch case}
    D--> E[process Sum;]-->J
    D--> F[Process Subtract]-->J
    D--> G[Process Multiply]-->J
    D--> H[Process Divide]
    H--> L{different from Zero}
    L--> M[Process divide the number]-->J
    D--> I[Process Modulo]
    I--> N{different from Zero}
    N--> O[Process modulo]-->J
    I--> J[/Display The Result of Operation(+, -, *, /, %)/]
    J--> K(End)
    
```
