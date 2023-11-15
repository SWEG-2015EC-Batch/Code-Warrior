include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main(){
    float wight, hight, BMI;
        cout <<"Please enter the wight of a peson ";
        cin >>wight;
        cout <<"Please enter the hight of a person ";
        cin >>hight;

        BMI = (wight)/(hight*hight);
        cout << "The BMI of the person is: " <<BMI <<" Kg/m^2";
