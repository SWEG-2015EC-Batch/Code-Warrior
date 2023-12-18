//Grade calculator 
#include <iostream>
using namespace std;

int main()
{
    int score, test, quiz, project, assi, finalExam;
    
    cout<<"Enter your test score out of 15%: ";
    cin>>test;
    cout<<"Enter your quiz score out of 5%: ";
    cin>>quiz;
    cout<<"Enter your project score out of 20%: ";
    cin>>project;
    cout<<"Enter your assignment score out of 10%: ";
    cin>>assi;
    cout<<"Enter your final exam score out of 50%: ";
    cin>>finalExam;
    
    score = test + quiz + project + assi + finalExam;
    
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
