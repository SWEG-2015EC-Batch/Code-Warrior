#include <iostream>
#include <cstring>

using namespace std;

int main() {
 
 char pass[100];

 
 cout << "Enter the password: ";
 cin >> pass;

 
 if (strcmp(pass, "no_password") == 0) {
   
   cout << "Correct password." << endl;
 } else {

   cout << "Incorrect password." << endl;
 }

 return 0;
}
