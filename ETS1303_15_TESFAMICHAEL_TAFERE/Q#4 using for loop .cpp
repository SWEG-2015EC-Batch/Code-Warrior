//A program that calculates x^y where x and y are provided by the user.
#include <iostream>
using namespace std;

int main() {
    int x, y, ans = 1; // Initialize ans to 1 to handle the case when y is 0

    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;

    for (int i = 1; i <= y; ++i) {
        ans *= x;
    }

    cout << "x^y = " << ans;

    return 0;
}
