#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers;

    int num;
    cout << "Enter numbers (enter 0 to stop):" << endl;
    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        numbers.push_back(num);
    }

      cout << "Even numbers in reverse order: ";
    for (int i = numbers.size() - 1; i >= 0; i--) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
        }
    }
    cout << std::endl;

    return 0;
}
