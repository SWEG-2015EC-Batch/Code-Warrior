#include <iostream>
using namespace std;
/*in this code i am going to input the amount of fuel in gallon the automobile has and miles per 
gallons the automobile can be driven then calculate how far in miles can the car goes, with out
 being refueled.
*/
int main(){
    /* i am going to assign "the amount of fuel in gallon the automobile has"
     to fuel_amt and "mile per gallon the automobile can be driven" to mile_per_hour 
     and "number of miles the car be driven" to num_mile */
  float fuel_amt, mile_per_hour, num_mile;
  cout<<"enter the amount of fuel in gallon the automobile fuel tank has:- ";
  cin>>fuel_amt;
  cout<<"enter the miles per gallons the automobile can be driven:- ";
  cin>>mile_per_hour;
  num_mile = fuel_amt * mile_per_hour;
  cout<<"this car can go "<<num_mile<<" miles with out refueling.";
  return 0;
}
