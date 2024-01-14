#include <iostream>
using namespace std;

int main() {
    int mark;
    cout << "Enter the student's mark: ";
    cin >> mark;

    cout << "Score\tLevel\n";

    if (mark >= 80) {
        cout << mark << "\tExcellent\n";
    } else if (mark >= 60) {
        cout << mark << "\tVery Good\n";
    } else if (mark >= 50) {
        cout << mark << "\tFair\n";
    } else if (mark >= 40) {
        cout << mark << "\tPoor\n";
    } else {
        cout << mark << "\tFail\n";
    }

    return 0;
}
