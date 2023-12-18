#include <iostream>
using namespace std;

int main()
{
    int score;
    
    cout<<"Enter your score: ";
    cin>>score;
    
     if(score >=90 && score <= 100)
    cout<<"A+";
    else if(score <90 && score >=80)
    cout<<"A";
    else if(score <80 && score >=75)
    cout<<"B+";
    else if(score <75 && score >=60)
    cout<<"B";
    else if (score <60 && score>=55)
    cout<<"C+";
    else if(score <55 && score >=45)
    cout<<"C";
    else if(score <45 && score >=35)
    cout<<"D";
    else if (score <0 || score >100)
    cout<<"Enter a valid score.";
    else
    cout<<"F";

  return 0;  
}
