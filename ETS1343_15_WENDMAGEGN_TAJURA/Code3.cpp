#include <stdio.h>
#include <ctype.h>
#include <iostream>
using namespace std;
int main(){
  
   char letter;
        // Prompt for input
        cout <<"Please enter the letter by using your keyboard ";
        // Receive Input
        cin >>letter;
        // Convert to Uppercase or Lowercase
        if (isalpha(letter)) {
            char uppercaseLetter = toupper(letter);
            char lowercaseLetter = tolower(letter);
            // Output Result
            cout <<"Upper letter: " <<uppercaseLetter <<"\n";
            cout <<"Lower letter: " <<lowercaseLetter <<"\n";

        } else {
            cout <<" Invalid input, Please enter the letter by using your keyboard ";
        }
return 0;
}
