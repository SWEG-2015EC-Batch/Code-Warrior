//Printing numbers from 10 up to 49
#include <iostream>
using namespace std;

int main() {
    int count = 10;

    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 8; ++j) {
            cout << count << "\t";
            ++count;

            if (count > 49) {
                break; // Stop printing if count exceeds 49
            }
        }
        cout << endl;

        if (count > 49) {
            break; // Stop outer loop if count exceeds 49
        }
    }

    return 0;
}
