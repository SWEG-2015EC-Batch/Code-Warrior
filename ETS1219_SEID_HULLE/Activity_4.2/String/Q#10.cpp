#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const char correctPassword[] = "secure123"; /
    char userInput[50];

    cout << "Enter the password: ";
    cin >> userInput;

    if (strcmp(userInput, correctPassword) == 0) {
        cout << "Correct password. Access granted." << endl;
    } else {
        cout << "Incorrect password. Access denied." << endl;
    }

    return 0;
}

