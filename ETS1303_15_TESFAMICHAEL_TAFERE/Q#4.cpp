//A program that calculates x^y where x and y are provided by the user.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;

    cout << "Enter the value of X: ";
    cin >> x;

    cout << "Enter the value of Y: ";
    cin >> y;

    double result = pow(x, y);

    cout << "The result of the expression " << x << "^" << y << " is: " << result <<endl;

    return 0;
}












