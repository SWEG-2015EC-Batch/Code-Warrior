//A program that convert an entered letter to upper or lower case letters
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char letter;
    int choice;

    cout << "Enter a letter: ";
    cin >> letter;

    cout << "Choose 1 for uppercase or 2 for lowercase: ";
    cin >> choice;

    if (choice == 1) {
        letter = toupper(letter);
        cout << "The uppercase equivalent of " << letter << " is " << letter << "." <<endl;
    }
    else if (choice == 2) {
        letter = tolower(letter);
        cout << "The lowercase equivalent of " << letter << " is " << letter << "." <<endl;
    }
    else {
        cout << "Invalid choice. Please choose either 1 or 2." <<endl;
    }

    return 0;
}
