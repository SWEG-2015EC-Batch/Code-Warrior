#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char input;
    int x = 0;
    //Use while loop statement 
    while (x == 0){

        cout<<"Please, Enter some Character or Enter 0 to exit. => ";
        cin>>input;
        if (input != '0'){
           if (isalpha(input)){
                if (isupper(input))
                {
                  cout<<"The entered Character is Upper Letter ";
                }
                else
                {
                    cout<<"The entered Character is Lower Letter ";
                }
             //Identify the Vowels from the rest
                char y = tolower(input);
                if (y == 'a' || y == 'e' || y == 'i' || y == 'o' || y == 'u'){
                    cout<<"and it's vowel \n";
                }else{
                    cout<<"and it's consonant \n";
                }
             //Identify the Digit is Even or Odd
           } else if(isdigit(input)){
                 if (input % 2 == 0){
                    cout<<"The entered Character is Even Number.\n";
                 }
                 else{
                    cout<<"The entered Character is Odd Number.\n";
                 }
           } else {
             //None of the Above has happened it should be Special Character
            cout<<"The Entered Character is Special Character.\n";
           }
        }
        else{
            cout<<"The Entered Character is Even Number and: ";
            cout<<"The program exit. Thank You\n";
            
            x = 1;
        }
    }
    
    return 0;
}
