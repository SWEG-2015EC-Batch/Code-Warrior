#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result;

    for (char ch : input) {
        if (isalpha(ch)) {
            result += ch;
        }
    }

    cout << "String after removing non-alphabet characters: " << result << "\n";

    return 0;
}
