//The mean and standard deviation of a list of numbers 
//By Tesfamichael 
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int n;
    float num, sum = 0, ave, SD, VR =0;

    vector<float> numbers;

    cout << "How many numbers do you want to work with: ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        cout << "Enter a number: ";
        cin >> num;
        numbers.push_back(num);
        sum += num;
    }
    ave = sum / n;
    for (float num : numbers) {
        VR += pow(num - ave, 2);
    }
    SD = sqrt(VR / n);
    cout << "The entered numbers: ";
    for (float num : numbers) {
        cout << num << " ";
    }

    cout << "\nThe mean for the entered numbers is: " << ave << "\n";
    cout << "The standard deviation is: " << SD;

    return 0;
}
