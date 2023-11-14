// converting a letter to uppercase and lowercase 
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char letter;
    
cout << "Enter a letter: ";
cin >> letter;
    
    if (isalpha(letter)) {
    cout << "Uppercase: " << static_cast<char>(std::toupper(letter)) <<endl;
    cout << "Lowercase: " << static_cast<char>(tolower(letter)) <<endl;
    } else {
    cout << "Invalid input! Please enter a letter." <<endl;
    }   
    return 0;
}
