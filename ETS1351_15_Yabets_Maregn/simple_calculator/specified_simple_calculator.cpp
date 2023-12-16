#include<iostream>
using namespace std;
int main()
{
    char operate, terminate;
    int num_1, num_2;
    
    do
    {
        cout<<"enter first number:- ";
    cin>>num_1;
    cout<<"enter second number:- ";
    cin>>num_2;
    cout<<"choose operators among ('+', '-', '*', '/', '%'):- ";
    cin>>operate;
      switch (operate)
   {
   case '+':
    cout<<"first number + second number = "<<(num_1 + num_2)<<endl;
    cout<<"do you want to continue (0 for exit, press any single key to continue, then hit enter):- ";;
    cin>>terminate;
    break;
   case '-':
    cout<<"first number - second number = "<<(num_1 - num_2)<<endl;
    cout<<"do you want to continue (0 for exit, press any single key to continue, then hit enter):- ";;
    cin>>terminate;
    break;
    case '*':
    cout<<"first number * second number = "<<(num_1 * num_2)<<endl;
   cout<<"do you want to continue (0 for exit, press any single key to continue, then hit enter):- ";
    cin>>terminate;
    break;
    case '/':
    if (num_2 == 0)
    {
     cout<<"the second number is 0 so division can't be continue "<<endl;   
    cout<<"do you want to continue (0 for exit, press any single key to continue, then hit enter):- ";
    cin>>terminate;
    }
    else
    {
      cout<<"first number divided by second number = "<<(num_1 / num_2)<<endl; 
cout<<"do you want to continue (0 for exit, press any single key to continue, then hit enter):- ";
    cin>>terminate; 
    }
    
    
    break;
    case '%':
    if (num_2 = 0)
     {
        cout<<"the second number is 0 so division can't be continue "<<endl; 
        cout<<"do you want to continue (0 for exit, press any single key to continue, then hit enter):- ";
    cin>>terminate;
     }
     else if (num_1 << num_2)
     {
       cout<<"0 because the first number is lessthan the second number." <<endl;
       cout<<"do you want to continue (0 for exit, press any single key to continue, then hit enter):- ";
    cin>>terminate;
     }
     else 
     {
        cout<<"the reminder of number 1 divided by number 2 = "<<(num_1 % num_2)<<endl;
cout<<"do you want to continue (0 for exit, press any single key to continue, then hit enter):- ";
    cin>>terminate;
     }

   default:
    cout<<"make sure to enter ('+', '-', '*', '/' ) "<<endl; 
   }  
    }
     while (terminate != '0');
    
   return 0;
}
