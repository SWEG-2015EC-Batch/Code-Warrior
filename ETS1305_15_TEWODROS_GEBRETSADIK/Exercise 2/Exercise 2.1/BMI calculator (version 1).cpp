// calculate BMI in c++
#include <iostream>
using namespace std;

int main() {
    double height, weight, bmi;
    cout << "Enter your height in meters: ";
    cin >> height;
    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    // Calculate the BMI
    bmi = weight / (height * height);

    // Display the BMI
    cout << "Your BMI is: " << bmi << endl;

    return 0;
}
