#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    int frequency[256] = {0}; 

    for (char c : text) {
        frequency[c]++;
    }

    char largest = 0;
    char smallest = 0;
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > frequency[largest]) {
            largest = i;
        }
        if (frequency[i] > 0 && (frequency[i] < frequency[smallest] || frequency[smallest] == 0)) {
            smallest = i;
        }
    }

    cout << "Character with the largest frequency: " << largest << endl;
    cout << "Character with the smallest frequency: " << smallest << endl;

    return 0;
}
