//Simple calculator
#include<iostream>
using namespace std;
int main(){
    char op;
    int num1, num2;
    float sum, subtract, multiply, divide, modulo; 
//Enter only what the program asked. Use This comment for the user's to recall 
        cout<<"Please, enter towo number: ";
        cin>>num1>>num2;
        cout<<"Choose the operator (+, -, *, /, %): "<<endl;
        cin>>op;
   //Use switch case to perform
        switch (op)
        {
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
         
  return 0;
}
