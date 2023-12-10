#include <iostream>
#include <string>
using namespace std;

// Function to swap the first and last digit of a number

int swapFirstLastDigit(int num) {
    string numStr = to_string(num);  // Convert the number to a string for easy manipulation
    char firstDigit = numStr[0];
    numStr[0] = numStr[numStr.size() - 1];
    numStr[numStr.size() - 1] = firstDigit;
    return stoi(numStr);  // Convert the string back to an integer and return
}

int main() {
    int choice, num;
    
    do {
        cout << "Enter (1.) Swap the first and last digit of a number" << endl;
        cout << "Enter (0.) to Stope or Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
  //Use  switch case
        switch (choice) {
            case 1:
                cout << "Please enter an integer: ";
                cin >> num;
                cout << "Swapped number: " << swapFirstLastDigit(num) << endl;
                break;
            case 0:
                cout << "Exiting... Good job.!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
