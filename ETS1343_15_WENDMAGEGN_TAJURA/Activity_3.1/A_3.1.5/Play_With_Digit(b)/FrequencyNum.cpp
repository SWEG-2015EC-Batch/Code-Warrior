#include <iostream>
#include <map>
using namespace std;

// Function to find the frequency of each digit
void digitFrequency(int num) {
    map<int, int> frequency;

    while (num > 0) {
        int digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }
//Use "\t" to oreder and form table format 
//"\t" useful to form space between to variables
    cout << "Digit\tFrequency" << endl;
    for (auto &entry : frequency) {
        cout << entry.first << "\t" << entry.second << endl;
    }
}
//main function to see the result on out put
int main() {
    long long number;
    bool exit = false;
    //Use do__while loop statement
    do{
    cout << "Enter an integer to find the frequency of each digit: ";
    cin >> number;

    digitFrequency(number);
    // make the program optional to continue or not 
    cout<<"Enter 0 to exit OR enter 1 to continue.";
    cin>>exit;
    }while(exit != 0);
    return 0;
}
