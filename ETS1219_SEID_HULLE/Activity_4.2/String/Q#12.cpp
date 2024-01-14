#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    const int NUM_QUESTIONS = 10;
    vector<char> answerKey = {'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D', 'A', 'B'};
    vector<char> studentAnswers(NUM_QUESTIONS);

    cout << "Enter the student's answers (A, B, C, or D) for each question:" << endl;

    for (int i = 0; i < NUM_QUESTIONS; ++i) {
        cout << "Question " << (i + 1) << ": ";
        cin >> studentAnswers[i];
    }

    int score = 0;
    cout << "\nTest Score and Marked Student Answers:" << endl;
    for (int i = 0; i < NUM_QUESTIONS; ++i) {
        cout << "Q" << (i + 1) << ": ";
        cout << "Correct Answer: " << answerKey[i] << ", ";
        cout << "Student Answer: " << studentAnswers[i];

        if (answerKey[i] == studentAnswers[i]) {
            cout << " (Correct)";
            score++;
        } else {
            cout << " (Incorrect)";
        }

        cout << endl;
    }

    cout << "\nTotal Score: " << score << " out of " << NUM_QUESTIONS << endl;

    return 0;
}

