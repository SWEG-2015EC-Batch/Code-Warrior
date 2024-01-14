#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string text;
    cout << "Enter a line of text: ";
    getline(cin, text);

    cout << "Uppercase: ";
    for (char ch : text) {
        cout << char(toupper(ch));
    }
    cout << "\n";

    cout << "Lowercase: ";
    for (char ch : text) {
        cout << char(tolower(ch));
    }
    cout << "\n";

    return 0;
}
