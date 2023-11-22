4. Write a program that find the result of the expression x^y where the 
value of x and y are entered by the user.
➢ Problem analysis
Input
✓ X value 
✓ Y value
Output
✓ Display result of expression
➢ Process or Operation
▪ Variable declaration: that holds an input and operational results.
▪ Print input prompt message and read corresponding input data.
▪ Calculate the result of the expressions (xY).
▪ Print output prompt message and process result (xy
).
➢ Design the program
• Variable declaration (What and How).
Float x, y, result;
• Reading input data (How)
Cout << “please enter the x value and the y value ”;
Cin >> x, >> y;
Result = pow(x, y);
Cout << “The result of the expression is: ” << x << “^” <<y << “ = ” <<result;


![image](https://github.com/SWEG-2015EC-Batch/Code-Warrior/assets/149233683/c99f91cf-52d8-4228-a9f3-93ca2d5a3be7)

Flowchart

```mermaid 
flowchart TB
 A(Start)--> B[/Enter the value of x/]
B-->C[/Enter the value of y/]
C-->D[ans = pow x, y]
D--> E[/print x^y = ans/]-->F(End)
```
