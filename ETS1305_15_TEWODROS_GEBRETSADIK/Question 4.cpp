// expression of x^y in c++
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x, y;
cout << "Enter the value of X: ";
cin >> x;
cout << "Enter the value of Y: ";
cin >> y;
double result = pow(x, y);
cout << "The result of " << x << "^" << y << " is: " << result <<endl;
    
    return 0;
}
