#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    string resultString = "";
    for (char c : inputString) {
        if (isalpha(c)) {
            resultString += c;
        }
    }

    cout << "\nString after removing non-alphabet characters: " << resultString << endl;

    return 0;
}

