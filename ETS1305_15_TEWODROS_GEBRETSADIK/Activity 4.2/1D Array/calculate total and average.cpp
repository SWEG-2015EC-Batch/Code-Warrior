#include <iostream>
using namespace std;

int main() {
    int temp[8];
    int total = 0;

    for (int i = 0; i < 8; ++i) 
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> temp[i];
        total += temp[i];
    }

    double average = static_cast<double>(total) / 8;

    cout << "Total: " << total << "\n";
    cout << "Average: " << average << "\n";

    return 0;
}
