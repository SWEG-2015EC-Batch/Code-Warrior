#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string input;
    cout << "Enter a line of text: ";
    getline(cin, input);

    istringstream stream(input);
    string token;

    cout << "Tokens:\n";
    while (stream >> token) {
        cout << token << "\n";
    }

    return 0;
}
