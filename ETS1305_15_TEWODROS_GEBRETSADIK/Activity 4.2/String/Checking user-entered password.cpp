#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int maxSize = 20; 
    char correctPassword[] = "secure123";
    char userPassword[maxSize];

    cout << "Enter the password: ";
    cin.getline(userPassword, maxSize);

    if (strcmp(userPassword, correctPassword) == 0) {
        cout << "Password is correct. Access granted.\n";
    } else {
        cout << "Incorrect password. Access denied.\n";
    }

    return 0;
}
