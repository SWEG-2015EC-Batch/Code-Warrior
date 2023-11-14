//fuel tank mile analizer 
#include <iostream>

using namespace std;

int main() 
{
    double fuel_capacity, miles_per_gallon;

    cout << "Enter the fuel capacity of the automobile in gallons: ";
    cin >> fuel_capacity;

    cout << "Enter the miles per gallon of the automobile: ";
    cin >> miles_per_gallon;

    double miles_without_refueling = fuel_capacity * miles_per_gallon;

    cout << "The number of miles the automobile can be driven without refueling is: " << miles_without_refueling << endl;

    return 0;
}
