#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);
    int vowelCount = 0, consonantCount = 0, digitCount = 0, specialCharCount = 0;

    for (char c : inputString) {
        if (isalpha(c)) {
            char lowerC = tolower(c);
            if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        } else if (isdigit(c)) {
            digitCount++;
        } else if (!isspace(c)) {
    cout << "\nFrequency of Vowels: " << vowelCount << endl;
    cout << "Frequency of Consonants: " << consonantCount << endl;
    cout << "Frequency of Digits: " << digitCount << endl;
    cout << "Frequency of Special Characters: " << specialCharCount << endl;

    return 0;
}

