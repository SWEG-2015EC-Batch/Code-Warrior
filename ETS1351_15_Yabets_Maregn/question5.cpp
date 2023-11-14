#include <iostream>
using namespace std;
int main(){
    string name;
    /* in this i assigned weekly working hours as "wwh", bonus rate per hour as "brph"
    and base salary as "bs".
    gross-salary as "gs" net salary as "ns" and bonus payment as bp"
    */
    double wwh, brph, bs, gs, ns, bp;
    cout<<"enter name:- ";
    cin>>name;
    cout<<"enter weekly working hours:- ";
    cin>>wwh;
    cout<<"bonus rate per hour:- ";
    cin>>brph;
    cout<<"base salary :- ";
    cin>>bs;
//gross salary = weekly work hour * base salery + weekly work hour * bonus rate per hour
   
    gs = (wwh*bs)+(wwh*brph);
// net salary = gross salary  - tax diduction + pension diduction
  ns = gs - (0.05*gs + 0.15*gs) ;
  // bonus payment = weekly working hour * bonus rate per hour
    bp = wwh*brph; 
    cout<<"gross salary = "<<gs<<endl;
    cout<<"net salary = "<<ns<<endl;
    cout<<"bonus payment = "<<bs;
    return 0;
    
}
