#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, digit, sum, numOfDigit;
    bool stop = false;

    do {
        sum = 0;
        numOfDigit = 0;

        cout << "Enter a number to check if it's an Armstrong number: ";
        cin >> num;
        temp = num;

        // Count the number of digits
        while (temp != 0) {
            ++numOfDigit;
            temp /= 10;
        }

        temp = num; // Reset tempNum to the original number
        // Calculate the sum of the cubes of its digits
        while (temp != 0) {
            digit = temp % 10;
            sum += pow(digit, numOfDigit);
            temp /= 10;
        }

        // Check if the number is an Armstrong number
        if (sum == num) {
            cout << num << " is an Armstrong number." << endl;
        } else {
            cout << num << " is not an Armstrong number." << endl;
        }

        cout << "Enter 0 to exit OR enter 1 to continue: ";
        cin >> stop;
    } while(stop != 0);

    return 0;
}
