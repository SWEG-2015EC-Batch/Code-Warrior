//Simple Calculator
#include<iostream>
using namespace std;
int main(){
    char op;
    int num1, num2, stop;
    float sum, subtract, multiply, divide, modulo; 
    //Use do-while statement to do work the task for many times and to excute
    do{
        cout<<"Please, enter towo number: ";
        cin>>num1>>num2;
        cout<<"Choose the operator (+, -, *, /, %) OR enter 0 to exit. "<<endl;
        cin>>op;
        //Use single if-- statement to exit the program
        if(op == '0'){
            cout<<"Calculator exited."<<endl;
            cout<<"Thank you, if you want to use again please run the program.";
            break;
    }
    //Use switch statement
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
            cout<<endl;
        //give the choice to the User if he/she want to continue or not.
            cout<<"Do you  went to continue or stop? To stop press 0 otherwise press any numbers:  ";
            cin>>stop;
           
    } while(stop != 0);
  return 0;
}
