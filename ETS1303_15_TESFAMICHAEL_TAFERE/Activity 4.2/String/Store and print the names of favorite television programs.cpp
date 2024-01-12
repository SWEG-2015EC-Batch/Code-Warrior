#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int maxSize = 50; 
    char program1[] = "FavoriteProgram1";
    char program2[maxSize];

    cout << "Enter the name of your second favorite television program: ";
    cin.getline(program2, maxSize);

    cout << "Favorite Television Programs:\n";
    cout << "1. " << program1 << "\n";
    cout << "2. " << program2 << "\n";

    return 0;
}
