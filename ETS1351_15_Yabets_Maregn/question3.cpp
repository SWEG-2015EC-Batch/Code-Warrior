#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
    char letter, upperCaseLetter, lowerCaseLetter;
    cout<<"enter letter:- ";
    cin>>letter; 
    upperCaseLetter = toupper(letter);
    lowerCaseLetter = tolower(letter);
    cout<<"the upper and lower case of letter "<<letter<<" repectively is  "<<upperCaseLetter<<" and "<<lowerCaseLetter<<".";
    return 0;
}
