
#include <iostream>
using namespace std;
int main() {
    const int SIZE = 8;
    int temp[SIZE];
    int total = 0;
    
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> temp[i];
        total += temp[i];
    }

    double average = static_cast<double>(total) / SIZE;
    cout << "Sum: " << total <<endl;
    cout << "Average: " << average <<endl;
  return 0;
}
