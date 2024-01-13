#include<iostream>
#include<string>
#include<cctype>

using namespace std;
int main() {
    int n;
    cout << "Enter the Number of Strings: ";
    cin >> n;
    cin.ignore(); // clear the input buffer

    string stringName[n];
    int vowels = 0, consonants = 0;

    for (int i = 0; i < n; i++) {
        cout << "String " << i + 1 << ": ";
        getline(cin, stringName[i]);

        for (char ch : stringName[i]) {
            if (isalpha(ch)) {
                cout << "Character: (" << ch<<") ";
                char lowercaseCh = tolower(ch);
                if (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u') {
                    vowels++;
                    cout << " is Vowels";
                } else {
                    consonants++;
                    cout << " is Consonants";
                }
            }
            cout<<endl;
        }
    }
    cout << endl;
    cout << "Number of Vowels: " << vowels << endl;
    cout << "Number of Consonants: " << consonants << endl;

    return 0;
}
