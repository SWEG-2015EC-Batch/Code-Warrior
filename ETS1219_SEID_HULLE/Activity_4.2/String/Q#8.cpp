#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main() {
    const int MAX_LENGTH = 100; 
    char inputText[MAX_LENGTH];

    cout << "Enter a line of text: ";
    cin.getline(inputText, MAX_LENGTH);
    cout << "Uppercase: ";
    for (int i = 0; i < strlen(inputText); ++i) {
        cout << static_cast<char>(toupper(inputText[i]));
    }
    cout << endl;
    cout << "Lowercase: ";
    for (int i = 0; i < strlen(inputText); ++i) {
        cout << static_cast<char>(tolower(inputText[i]));
    }
    cout << endl;

    return 0;
}

