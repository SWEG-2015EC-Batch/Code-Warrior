#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int totalMarks;
    cout << "Enter the total marks: ";
    cin >> totalMarks;
    string scoreLevel;
    if (totalMarks >= 80) {
        scoreLevel = "Excellent";
    } else if (totalMarks >= 60) {
        scoreLevel = "Very Good";
    } else if (totalMarks >= 50) {
        scoreLevel = "Fair";
    } else if (totalMarks >= 40) {
        scoreLevel = "Poor";
    } else {
        scoreLevel = "Fail";
    }
    cout << left << setw(15) << "Score Level"
              << setw(10) << "Total Marks" << endl;
    cout << left << setw(15) << scoreLevel
              << setw(10) << totalMarks << endl;

    return 0;

