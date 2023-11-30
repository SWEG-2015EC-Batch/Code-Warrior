//BMI calculator
#include <iostream>
using namespace std;

int main() {
    float height, weight, bmi;

    cout << "Enter your height in meters: ";
    cin >> height;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    bmi = weight / (height * height);

    cout << "Your Body Mass Index is: " << bmi <<" Kg/m^2."<< endl;

    return 0;
}






