#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main() {
    const int maxWords = 20; // Maximum Number of Words
    const int maxWordLength = 100; // Maximum Length of a Word
    char words[maxWords][maxWordLength]; // 2D array to store words
    int numWords;

    cout << "Enter the Number of Words up to (" << maxWords << "): ";
    cin >> numWords;
    cin.ignore(); // clear the input buffer

    if (numWords > maxWords) {
        cout << "Exceeded the Maximum Number of Words." << endl;
        return 1;
    }

    cout << "Enter Only (" << numWords << ") Words:" << endl;
    for (int i = 0; i < numWords; i++) {
        cout << "Word " << i + 1 << ": ";
        cin.getline(words[i], maxWordLength);
    }

    for (int i = 0; i < numWords; i++) {
        for (int j = 0; words[i][j] != '\0'; j++) {
            char ch = words[i][j];
            if (isalpha(ch)) {
                cout << ch << ", " << "The Character is an Alphabet." << endl;
            } else {
                cout << ch << ", " << "The Character is Not an Alphabet." << endl;
            }
        }
    }

    for (int i = 0; i < numWords; i++) {
        int length = 0;
        int j = 0;
        while (words[i][j] != '\0') {
            if (isalpha(words[i][j])) {
                words[i][length++] = words[i][j];
            }
            j++;
        }
        words[i][length] = '\0'; // Add null terminator to end the string
    }

    cout << "The String Word after Removing Non-Alphabet Characters: " << endl;
    for (int i = 0; i < numWords; i++) {
        cout << words[i] << " ";
    }
    cout << endl;

    return 0;
}
