#include<iostream>

using namespace std;
int main()
{
    char operate;
    int num_1, num_2;
  
    
cout<<"enter first number:-  ";
    cin>>num_1;
    cout<<"enter second number:-  ";
    cin>>num_2;
    cout<<"choose operators among ('+', '-', '*', '/', '%' ):-  ";
    cin>>operate;
    
 
      switch (operate)
   {
   case '+':
    cout<<"first number + second number = "<<(num_1 + num_2)<<endl;
    break;
   case '-':
    cout<<"first number - second number = "<<(num_1 - num_2)<<endl;
    break;
    case '*':
    cout<<"first number * second number = "<<(num_1 * num_2)<<endl;
    break;
    case '/':
    if (num_2 == 0)
    {
     cout<<"the second number is 0 so division can't be continue "<<endl;   
    }
    else
    {
      cout<<"first number divided by second number = "<<(num_1 / num_2)<<endl;  
    }
     break;
     case '%':
     if (num_2 = 0)
     {
        cout<<"the second number is 0 so division can't be continue "<<endl; 
     }
     else if (num_1 << num_2)
     {
       cout<<"0 because the first number is lessthan the second number." ;
     }
     else 
     {
        cout<<"the reminder of number 1 divided by number 2 = "<<(num_1 % num_2)<<endl;
     }
     
     
    
    break;
    default:
    cout<<"make sure to enter ('+', '-', '*', '/' ) and 0 to exit"<<endl; 
   }  

    return 0; 
}
