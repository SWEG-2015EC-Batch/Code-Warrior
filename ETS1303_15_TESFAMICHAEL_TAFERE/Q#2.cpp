//Fuel tank mile analizer 
#include <iostream>
using namespace std;
int main()
{
    float fule_capacity, mile_per_gallon, miles_without_refuleing;
    
    
    cout<<"Enter fule capacity of the fule tank: ";
    cin>>fule_capacity;
    cout<<"Enter the mile per gallon of the automotive: ";
    cin>>mile_per_gallon;
    
    
   miles_without_refuleing = fule_capacity * mile_per_gallon;
   
   cout<<"The number of miles the automotive can be driven is "<< miles_without_refuleing<<" miles."
;
return 0;
}    
    