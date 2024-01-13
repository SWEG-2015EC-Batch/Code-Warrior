#include <iostream>
#include <string>

using namespace std;

int main() {
 
 string firstName, middleName, lastName;
 cout << "Enter your first name: ";
 cin >> firstName;
 cout << "Enter your middle name: ";
 cin >> middleName;
 cout << "Enter your last name: ";
 cin >> lastName;

 
 cout << "Your initials are: " << firstName[0] << middleName[0] << lastName[0] << endl;

 return 0;
}
