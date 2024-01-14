#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string inputString;
    
    cout << "Enter a string: ";
    getline(cin, inputString);

    int vowelCount = 0, consonantCount = 0;
    for (char c : inputString) {
        if (isalpha(c)) {
            char lowerC = tolower(c);
            if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }

    cout << "\nNumber of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;

    return 0;
}

