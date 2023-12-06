**Problem Analysis**
INPUT                                          OUTPUT
=> Tow numbers num1 and num2                => The Result of the 5 operation 
=> operator (+, -, *, /, %)                    sum, subtract, multiply, divide, and modulo 
=> execut(stop)

**Process or Operation**
=> Variable declaration - the input opration and operand result, execut statement and the choices
=> Print input prompt manage and read corresponding input data
=> Validation - check if the entered values number and different from Zero
=> Calculate the operation
=> Print the output prompt manage and process the opreation result

**Design the Problem**
=> Variable declaration:-                                      **Reading input data**
== float sum, subtract, multiply, divide, and modulo           cout<<"Enter Two number";
== int num1, num2, stop;                                       cin>>num1>>num2;
== char op;                                                    cout<<"Choose the operator(+, -, *, /, %)";
                                                               cin>>op;
                                                              
Make Simple Calculator by using do__while and switch methods
Use to check the input number different from Zero
**Perform the operation - compute the result** 
switch (op){
            case '+': sum = num1 + num2;
                cout<<"The result of the sum is: "<<sum<<endl; 
            break;

            case '-': subtract = num1 - num2;
                cout<<"The result of the subtract is: "<<subtract<<endl; 
            break;

            case '*': multiply = num1 * num2;
                cout<<"The result of the multiply is: "<<multiply<<endl; 
            break;

            case '/': 
                if (num2 != 0) {
                   divide = num1 / num2;
                   cout << "The Result is: " << divide <<endl;
                } else {
                    cout << "Error: Division by zero is not allowed." <<endl;
                }
            break;

            case '%': 
                if (num2 != 0) {
                    modulo = num1 % num2;
                    cout << "The Result is: " << modulo <<endl;
                } else {
                    cout << "Error: Division by zero is not allowed." <<endl;
                }
            break;

            default:
                cout<<"Invalide input, Please enter the correct operation (+, -, *, /).\n";
                cout<<"Enter 0 to exit: "<<endl;
        }
            
