#include <iostream>
#include <math.h>
using namespace std;
int main(){
        //Prompt the user to input the capacity in gallons of the fuel tank
        float tankCapacity, milePerGallon, numMile;
        milePerGallon = 0.0;
        cout <<"Please enter the tank capacity of the fuel: ";
        cin >>tankCapacity;
        //Prompt the user to input the miles per gallon the automobile can be driven
        cout <<"Please enter the mile per gallon: ";
        cin >>milePerGallon;
        //Calculate the total number of miles the automobile can be driven without refueling
        numMile = milePerGallon * tankCapacity;
        cout <<"The number of mile of the automobile is: " <<numMile;
return 0;
}
