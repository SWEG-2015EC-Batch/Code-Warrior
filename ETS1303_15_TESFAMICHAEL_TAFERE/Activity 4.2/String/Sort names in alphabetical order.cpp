#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of names: ";
    cin >> n;

    vector<string> names;

    for (int i = 0; i < n; ++i) {
        string name;
        cout << "Enter name " << i + 1 << ": ";
        cin >> name;
        names.push_back(name);
    }

    sort(names.begin(), names.end());

    cout << "Names in alphabetical order:\n";
    for (const string& name : names) {
        cout << name << "\n";
    }

    return 0;
}
