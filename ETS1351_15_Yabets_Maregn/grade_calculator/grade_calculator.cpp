#include<iostream>
using namespace std;
int main(){
    float mark;
    cout<<"Enter Mark:- ";
    cin>>mark;
    if (mark<=100 && mark>=90)
    {
        cout<<"A+";
    }
    else if (mark<90 && mark>=80)
    {
        cout<<"A";
    }
    else if (mark<80 && mark>=75)
    {
        cout<<"B+";
    }
    else if (mark<75 && mark>=60)
    {
        cout<<"B";
    }
    else if (mark<60 && mark>=55)
    {
        cout<<"C+";
    }
    else if (mark<55 && mark>=45)
    {
        cout<<"C";
    }
    else if (mark<45 && mark>=30)
    {
        cout<<"D";
    }
    else if (mark<30 && mark>=0)
    {
        cout<<"F";
    }
    else  
    {
        cout<<"sorry you doesn't entered the appropriate mark, mark should be in the range of [0-100]";
    }
    
    return 0; 
}
