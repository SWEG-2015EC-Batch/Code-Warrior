//Simple calculator using switch case.
//By Tesfamichael 
#include <iostream>
using namespace std;

int main()
{
    int oprand1, oprand2, result, choice;
    char oprators;
    
    cout<<"Enter two numbers that you want to work on separated by space: ";
    cin>>oprand1>>oprand2;
    
    cout<<"Enter the oprator you want to do from(*, /, +, -, %): ";
    cin>>oprators;
    
    do{
    switch(oprators){
        
        case '*': result = oprand1 * oprand2;
        cout<< "The product of "<<oprand1<<" and "<<oprand2<<" is "<<result;
        break;
        
        case '/': if(oprand2==0){
            cout<<"Please enter a number different from zero for the second number. ";
            }else{
        result = oprand1 / oprand2;
          cout<<"The division of "<<oprand1<<" by "<<oprand2<<" is "<<result;}
        break;
   
          case '+': result = oprand1 + oprand2;
            cout<< "The addition of "<<oprand1<<"and"<<oprand2<<" is "<<result;
        break;
        
      case '-': result = oprand1 - oprand2;
        cout<< "The subtraction of "<<oprand1<<"and"<<oprand2<<" is "<<result;
        break;
        case '%': if(oprand2==0){
            cout<<"Please enter a number different from zero for the second number. ";
            }else{
        result = oprand1 % oprand2;
        cout<< "The remainder of "<<oprand1<<" when divided by " <<oprand2<<" is "<<result;}
        break;
           
        default: cout<<"Please enter a valid oprator from(*, /, +, -, %), you entered " <<oprators<< " which is unknown \n";
        break;      
        }
        cout<<"\nEnter 0 to stop or enter any other number to continue. ";
        cin>>choice;
    }while(choice != 0);
    return 0;
}
