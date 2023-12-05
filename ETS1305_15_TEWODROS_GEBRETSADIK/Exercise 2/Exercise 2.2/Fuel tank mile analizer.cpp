// calculations of number of automobile miles in c++
#include <iostream>
using namespace std;
int main() {
    double gallons, milesPerGallon, miles;
    cout << "Enter the capacity in gallons of the automobile: ";
    cin >> gallons;
    cout << "Enter the miles per gallon of the automobile: ";
    cin >> milesPerGallon;
    miles = gallons * milesPerGallon;
    cout << "The automobile can be driven for " << miles << " miles without refueling." << endl;
    return 0;
}
