#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    int length = word.length();
    bool isPalindrome = true;

    for (int i = 0; i < length / 2; ++i) {
        if (tolower(word[i]) != tolower(word[length - 1 - i])) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The word is a palindrome.\n";
    } else {
        cout << "The word is not a palindrome.\n";
    }

    return 0;
}
