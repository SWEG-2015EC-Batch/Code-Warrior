#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> names;
    int numNames;

    cout << "Enter the number of names: ";
    cin >> numNames;
    cout << "Enter the names, one by one:" << endl;
    for (int i = 0; i < numNames; ++i) {
        string name;
        cout << "Name " << (i + 1) << ": ";
        cin >> name;
        names.push_back(name);
    }

    sort(names.begin(), names.end());
    cout << "\nNames in alphabetical order:" << endl;
    for (const string& name : names) {
        cout << name << endl;
    }

    return 0;
}

