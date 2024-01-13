#include<iostream>
#include<string>
#include<cctype>
using namespace std;

const int MAX_STRINGS = 100;
const int MAX_LENGTH = 100;

int main() {
    int n;
    cout << "Enter the Number of Strings: ";
    cin >> n;
    cin.ignore(); // clear the input buffer

    if (n > MAX_STRINGS) {
        cout << "Exceeded the Maximum Number of Strings." << endl;
        return 1;
    }
    string stringName[MAX_STRINGS];
    for (int i = 0; i < n; i++) {
        cout << "String " << i + 1 << ": ";
        getline(cin, stringName[i]);

        if (stringName[i].length() > MAX_LENGTH) {
            cout << "Exceeded the Maximum Length of a String." << endl;
            return 1;
        }
    }
    int maxFrequency = 0, minFrequency = MAX_LENGTH;
    int frequency[MAX_STRINGS][26] = {0}; // 2D array to store frequency of characters

    for (int i = 0; i < n; i++) {
        for (char ch : stringName[i]) {
            if (isalpha(ch)) {
                ch = tolower(ch); // convert to lowercase
                frequency[i][ch - 'a']++; // increment the frequency of the character
            }
        }
    }
    cout<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 26; j++) {
            if (frequency[i][j] > 0) {
                maxFrequency = max(maxFrequency, frequency[i][j]);
                minFrequency = min(minFrequency, frequency[i][j]);
            }
        }
    }
    cout << "The Maximum Frequency: " << maxFrequency << endl;
    cout << "The Minimum Frequency: " << minFrequency << endl;

    return 0;
}
