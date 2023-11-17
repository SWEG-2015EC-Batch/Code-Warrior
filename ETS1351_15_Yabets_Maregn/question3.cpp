#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
    char letter;
    int letterCase ;
    cout<<"enter letter:- ";
    cin>>letter; 
     cout<<"do u want to change it to uppercase or lowercase, type 1 for uppercase and 2 for lower case:- ";
      cin>>letterCase;
      if (letterCase==1){
             letter = toupper(letter);
        cout<<"the uppercase of the letter you entered is "<<letter;
      }
        
    else if(letterCase==2){
        letter = tolower(letter);
    cout<<"the lowercase of the letter you entered is "<<letter;
    }
    else{
        cout<<"make sure you entered single letter and you  chose between 1 and 2. ";
    }
    return 0;
}
