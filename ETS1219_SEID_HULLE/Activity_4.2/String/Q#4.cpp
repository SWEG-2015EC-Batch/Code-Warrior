#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string inputText;

    cout << "Enter a line of text: ";
    getline(cin, inputText);

    stringstream ss(inputText);
    vector<string> tokens;
    string token;

    while (ss >> token) {
        tokens.push_back(token);
    }

    cout << "\nTokens (separated by spaces):" << endl;
    for (const string& t : tokens) {
        cout << t << endl;
    }

    return 0;
}

