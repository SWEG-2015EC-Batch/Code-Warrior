#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowels = 0, consonants = 0, digits = 0, specials = 0;

    for (char ch : input) {
        if (isalpha(ch)) {
            char lowerCh = tolower(ch);
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
                ++vowels;
            } else {
                ++consonants;
            }
        } else if (isdigit(ch)) {
            ++digits;
        } else if (ispunct(ch)) {
            ++specials;
        }
    }

    cout << "Frequency of vowels: " << vowels << "\n";
    cout << "Frequency of consonants: " << consonants << "\n";
    cout << "Frequency of digits: " << digits << "\n";
    cout << "Frequency of special characters: " << specials << "\n";

    return 0;
}
