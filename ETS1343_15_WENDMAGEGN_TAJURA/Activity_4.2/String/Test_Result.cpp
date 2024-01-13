//THe Program made by WENDMAGEGN T.
#include <iostream>
#include <string>
using namespace std;

int main() {
    int i, mark = 0;
    char ans[10];
    string studentName;

    cout << "Enter Student Name: ";
    getline(cin, studentName);

    char answerKey[10][4] = {
        {'A', 'B', 'C', 'D'},
        {'A', 'B', 'C', 'D'},
        {'A', 'B', 'C', 'D'},
        {'A', 'B', 'C', 'D'},
        {'A', 'B', 'C', 'D'},
        {'A', 'B', 'C', 'D'},
        {'A', 'B', 'C', 'D'},
        {'A', 'B', 'C', 'D'},
        {'A', 'B', 'C', 'D'},
        {'A', 'B', 'C', 'D'}
    };

    cout << "Enter the Correct Answer form 'A', 'B', 'C', 'D':\n";
    for (i = 0; i < 10; i++) {
        cout << "Answer " << i + 1 << ": ";
        cin >> ans[i];

        // Check if the student's answer matches either the uppercase or lowercase version of the correct answer
        if (ans[i] == answerKey[i][0] || ans[i] == tolower(answerKey[i][0]) ||
            ans[i] == answerKey[i][1] || ans[i] == tolower(answerKey[i][1]) ||
            ans[i] == answerKey[i][2] || ans[i] == tolower(answerKey[i][2]) ||
            ans[i] == answerKey[i][3] || ans[i] == tolower(answerKey[i][3])) {
            mark++;
        }
    }

    cout << "Your Full Name: " << studentName << endl;
    cout << "Test Result out of 10: " << mark << endl;

    return 0;
}
