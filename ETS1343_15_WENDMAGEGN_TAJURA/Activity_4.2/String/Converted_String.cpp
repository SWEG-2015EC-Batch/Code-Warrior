#include<iostream>
#include<string>
#include<cctype>

using namespace std;
const int MAX_LENGTH = 100;

int main() {
    int n;
    cout << "Enter the Number of Strings: ";
    cin >> n;
    cin.ignore(); // clear the input buffer

    string text[n];
    cout << "Please, Enter your TEXT line:\n";
    cout << "------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i + 1 << ": ";
        getline(cin, text[i]);

        if (text[i].length() > n) {
            cout << "Exceeded the Maximum Length of a String." << endl;
            return 1;
        }
    }

    cout << "Converted String TEXT:\n";
    cout << "------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << "Text " << i + 1 << " (Upper Case): ";
        for (int j = 0; j < text[i].length(); j++) {
            if (islower(text[i][j])) {
                text[i][j] = toupper(text[i][j]);
            }
            cout << text[i][j];
        }
        cout << endl;

        cout << "Text " << i + 1 << " (Lower Case): ";
        for (int j = 0; j < text[i].length(); j++) {
            if (isupper(text[i][j])) {
                text[i][j] = tolower(text[i][j]);
            }
            cout << text[i][j];
        }
        cout << endl;
    }

    return 0;
}
