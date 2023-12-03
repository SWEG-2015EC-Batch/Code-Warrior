//A program that calculates x^y where x and y are provided by the user.
//By Tesfamichael 
#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int x, y, ans;

    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;

    ans = pow(x, y);

    cout << "x^y = " << ans;

    return 0;
}

