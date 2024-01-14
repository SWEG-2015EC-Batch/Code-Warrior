#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowels = 0, consonants = 0;

    for (char ch : input) {
        if (isalpha(ch)) {
            char lowerCh = tolower(ch);
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
                ++vowels;
            } else {
                ++consonants;
            }
        }
    }

    cout << "Number of vowels: " << vowels << "\n";
    cout << "Number of consonants: " << consonants << "\n";

    return 0;
}
