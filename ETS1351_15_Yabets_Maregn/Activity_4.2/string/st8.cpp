#include <iostream>
#include <string>

using namespace std;

int main() {
 
 cout << "Enter a line of text: ";
 string text;
 getline(cin, text);

 
 string uppercase = text;
 string lowercase = text;
 for (int i = 0; i < uppercase.length(); i++) {
   uppercase[i] = toupper(uppercase[i]);
 }
 for (int i = 0; i < lowercase.length(); i++) {
   lowercase[i] = tolower(lowercase[i]);
 }

 
 cout << "Uppercase: " << uppercase << endl;
 cout << "Lowercase: " << lowercase << endl;

 return 0;
}
