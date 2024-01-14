#include <iostream>
using namespace std;

int main() {
    const int maxSize = 10; 
    int numbers[maxSize];
    int count = 0;

    cout << "Enter numbers. Enter -1 to stop.\n";

    int num;
    while (cin >> num && num != -1) {
        if (num % 2 == 0) {
            numbers[count++] = num;
        }
    }

    cout << "Even numbers in reverse order:\n";
    for (int i = count - 1; i >= 0; --i) {
        cout << numbers[i] << "\n";
    }

    return 0;
}
