#include <iostream>
using namespace std;

int main() {
    int test, assignment, quiz, project, final;

    cout << "Enter test score: ";
    cin >> test;
    cout << "Enter assignment score: ";
    cin >> assignment;
    cout << "Enter quiz score: ";
    cin >> quiz;
    cout << "Enter project score: ";
    cin >> project;
    cout << "Enter final score: ";
    cin >> final;

    int total = test + assignment + quiz + project + final;

    cout << "\nScore\tLevel\n";

    cout << total << "\t";

    if (total >= 80) {
        cout << "Excellent\n";
    } else if (total >= 60) {
        cout << "Very Good\n";
    } else if (total >= 50) {
        cout << "Fair\n";
    } else if (total >= 40) {
        cout << "Poor\n";
    } else {
        cout << "Fail\n";
    }

    return 0;
}
