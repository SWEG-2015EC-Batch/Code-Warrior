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


##FLOW CHART
```mermaid
flowchart TB
    A(Start) --> B[/Enter a TWO number, num1 and num2
      Read operator(+, -, *, /, %), /]
    B--> C[Process The input data validation]-->B
    C--> |NOT Valid|B[/Enter a TWO number, num1 and num2
      Read operator(+, -, *, /, %)/]
    C--> D{Use Switch case}
    D--> E[process Sum;]
    D--> F[Process Subtract]
    D--> G[Process Multiply]
    D --> H[Process Divide]
    H--> L{different from Zero}
    L--> M[Process divide the number]-->J
    D--> I[Process Modulo]
    I--> N{different from Zero}
    N--> O[Process modulo]-->J
    I--> J[/Display The Result of Operation(+, -, *, /, %)/]
    J--> K(End)
    
```
