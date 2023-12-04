#include <ctype.h>
#include <iostream>
using namespace std;
int main(){
  
   char letter;
        // Prompt for input
        cout <<"Please enter the letter by using your keyboard: ";
        // Receive Input
        cin >>letter;
        // Convert to Uppercase or Lowercase
        if (isalpha(letter)) {
            char uppercaseLetter = toupper(letter);
            
            // Output Result
            cout <<"Upper letter: " <<uppercaseLetter <<"\n";
            cout <<"Please enter the letter again: ";
        // Receive Input
        cin >>letter;
        char lowercaseLetter = tolower(letter);
            cout <<"Lower letter: " <<lowercaseLetter <<"\n";

        } else {
            cout <<" Invalid input, Please enter the letter by using your keyboard ";
        }

return 0;
}
