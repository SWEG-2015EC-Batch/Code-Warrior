
#include <iostream>
using namespace std;
int main() {

    int testScore, assignmentScore, quizScore, projectScore, finalScore;

    cout << "Enter test score: ";
    cin >> testScore;

    cout << "Enter assignment score: ";
    cin >> assignmentScore;

    cout << "Enter quiz score: ";
    cin >> quizScore;

    cout << "Enter project score: ";
    cin >> projectScore;

    cout << "Enter final score: ";
    cin >> finalScore;

    int totalMarks = testScore + assignmentScore + quizScore + projectScore + finalScore;

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

    cout << "\nResults:" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "  Test      |  Assignment |  Quiz       |  Project    |  Final      |  Total      |  Level      " << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "  " << setw(10) << testScore << "  |  " << setw(10) << assignmentScore << "  |  " << setw(10) << quizScore
         << "  |  " << setw(10) << projectScore << "  |  " << setw(10) << finalScore << "  |  " << setw(10) << totalMarks
         << "  |  " << setw(10) << scoreLevel << endl;
    cout << "-------------------------------------------------------" << endl;

    return 0;
}
