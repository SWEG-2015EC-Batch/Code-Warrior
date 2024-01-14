#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int numQuestions = 10;
    char answerKey[] = "ABCDABCDAB";
    char studentAnswer[numQuestions + 1];

    cout << "Enter the student's answer for each question (A/B/C/D): ";
    cin.getline(studentAnswer, numQuestions + 1);

    int score = 0;

    cout << "Question\tCorrect Answer\tStudent Answer\n";
    for (int i = 0; i < numQuestions; ++i) {
        cout << "   " << i + 1 << "\t\t      " << answerKey[i] << "\t\t      " << studentAnswer[i] << "\n";
        if (toupper(answerKey[i]) == toupper(studentAnswer[i])) {
            ++score;
        }
    }

    cout << "\nTest Score: " << score << " out of " << numQuestions << "\n";

    return 0;
}
