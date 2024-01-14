#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    unordered_map<char, int> charFrequency;

    for (char ch : input) {
        if (isalpha(ch)) {
            charFrequency[ch]++;
        }
    }

    char maxChar = '\0', minChar = '\0';
    int maxFrequency = 0, minFrequency = INT_MAX;

    for (auto& entry : charFrequency) {
        cout << "Frequency of '" << entry.first << "': " << entry.second << "\n";

        if (entry.second > maxFrequency) {
            maxFrequency = entry.second;
            maxChar = entry.first;
        }

        if (entry.second < minFrequency) {
            minFrequency = entry.second;
            minChar = entry.first;
        }
    }

    cout << "Character with the largest frequency: '" << maxChar << "' (Frequency: " << maxFrequency << ")\n";
    cout << "Character with the smallest frequency: '" << minChar << "' (Frequency: " << minFrequency << ")\n";

    return 0;
}
