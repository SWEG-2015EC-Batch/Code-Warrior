#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    unordered_map<char, int> charFrequency;
    for (char c : inputString) {
        if (isalpha(c)) {  
            charFrequency[c]++;
        }
    }

    auto maxElement = max_element(charFrequency.begin(), charFrequency.end(),
                                  [](const pair<char, int>& p1, const pair<char, int>& p2) {
                                      return p1.second < p2.second;
                                  });
    char maxChar = maxElement->first;
    int maxFrequency = maxElement->second;

    auto minElement = min_element(charFrequency.begin(), charFrequency.end(),
                                  [](const pair<char, int>& p1, const pair<char, int>& p2) {
                                      return p1.second < p2.second;
                                  });
    char minChar = minElement->first;
    int minFrequency = minElement->second;

    cout << "\nCharacter with the largest frequency: " << maxChar << " (Frequency: " << maxFrequency << " times)" << endl;
    cout << "Character with the smallest frequency: " << minChar << " (Frequency: " << minFrequency << " times)" << endl;

    return 0;
}

