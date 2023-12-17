//Printing numbers 
#include <iostream>
using namespace std;

int main() {
    int start, end;

    // Input parameters from the user
    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    int count = start;

    for (int i = start; i <= end; ++i) {
        cout << count << "\t";
        ++count;

        if (count > end) {
            break; // Stop printing if count exceeds the ending number
        }

    }

    return 0;
}
