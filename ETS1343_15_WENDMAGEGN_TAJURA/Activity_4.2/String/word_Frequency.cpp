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
    int freqVowels = 0, freqConsonants = 0, freqDigits =0, freqSpeCh =0;

    for (int i = 0; i < n; i++) {
        cout << "String " << i + 1 << ": ";
        getline(cin, stringName[i]);

        for (char ch : stringName[i]) {
            if (isalpha(ch)) {
                char lowercaseCh = tolower(ch);
                if (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u') {
                    freqVowels++;
                } else {
                    freqConsonants++;
                }
            }else if(isdigit(ch)){
                freqDigits++;
            }else{
                freqSpeCh++;
            }
        }
    }
    cout<<endl;
    cout<<"The enterred Strings:\n";
    for(int i=0; i<n; i++){
        cout<<stringName[i]<<endl;
    }
    cout << endl;
    cout << "Number of Frequency of Vowels: " << freqVowels << endl;
    cout << "Number of Frequency of Consonants: " << freqConsonants << endl;
    cout << "Number of Frequency of Digits: " << freqDigits << endl;
    cout << "Number of Frequency of Spetial Characters including space: " << freqSpeCh << endl;

    return 0;
}
