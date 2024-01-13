#include <iostream>
#include <cstring>
#include <cctype>
//at least 8 characters long
// at least 1 uppercase letter
//at least 1lowercase letter
//at least 1 digit
//at least 1 Spectial character
using namespace std;
int main() {
    char pass[16];
    const char _password[] = "Pass@123";

    // Check if the password meets the required criteria
    bool hasUpperCase = false;
    bool hasLowerCase = false;
    bool hasDigit = false;
    bool hasSymbol = false;

    cout << "Enter the password: ";
    cin.getline(pass, 16);

    int length = strlen(pass);
    for (int i = 0; i < length; i++) {
        if (isupper(pass[i])) {
            hasUpperCase = true;
        } else if (islower(pass[i])) {
            hasLowerCase = true;
        } else if (isdigit(pass[i])) {
            hasDigit = true;
        } else {
            hasSymbol = true;
        }
    }

    if (strcmp(pass, _password) == 0 && length >= 8 && hasUpperCase && hasLowerCase && hasDigit && hasSymbol) {
        cout << "Correct password! Access granted." <<endl;
    } else {
        cout << "Incorrect password or invalid format! Access denied." <<endl;
    }

    return 0;
}
