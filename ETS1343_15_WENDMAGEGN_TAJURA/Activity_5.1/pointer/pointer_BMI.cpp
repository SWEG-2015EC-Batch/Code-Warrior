#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX_PERSONS = 100;

int main() {
    int N;
    cout << "Enter the number of persons: ";
    cin >> N;

    double height[MAX_PERSONS];
    double weight[MAX_PERSONS];
    double bmi[MAX_PERSONS];
    string fullName[MAX_PERSONS];

    // Read the height and weight of each person
    for (int i = 0; i < N; i++) {
        cout << "Enter the height (in meters) of person " << (i + 1) << ": ";
        cin >> height[i];

        cout << "Enter the weight (in kilograms) of person " << (i + 1) << ": ";
        cin >> weight[i];

        // Calculate the BMI using pointers
        double* heightPtr = &height[i];
        double* weightPtr = &weight[i];
        double* bmiPtr = &bmi[i];

        *bmiPtr = *weightPtr / (*heightPtr * *heightPtr);

        cin.ignore();  // Ignore the newline character

        cout << "Enter the full name of person " << (i + 1) << ": ";
        getline(cin, fullName[i]);
    }

    // Print the records in a tabular format using pointer operations
    cout << "\nRecords:\n\n";
    cout << setw(10) << "Full Name" << setw(10) << "Height" << setw(10) << "Weight" << setw(10) << "BMI" << endl;

    for (int i = 0; i < N; i++) {
        string* namePtr = &fullName[i];
        double* heightPtr = &height[i];
        double* weightPtr = &weight[i];
        double* bmiPtr = &bmi[i];

        cout << setw(10) << *namePtr << setw(10) << *heightPtr << setw(10) << *weightPtr << setw(10) << *bmiPtr << endl;
    }

    return 0;
}
