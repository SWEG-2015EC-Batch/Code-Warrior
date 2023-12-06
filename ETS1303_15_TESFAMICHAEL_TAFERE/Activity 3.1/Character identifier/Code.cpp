//Character identifier 
//By Tesfamichael Tafere 
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
 char character;
 
 cout<<"Enter any character from the keyboard: ";
cin>>character;

if(isalpha(character))
{ 
 if(isupper (character))
 {
        if(character =='A' || character =='E' || character == 'I' || character == 'O' || character == 'U')
        {
         cout<<"It is uppercase vowel letter.";
         
        }else{
          cout<<"It is uppercase consonant letter.";
                }   
 }else{ 
   if(character =='a' || character =='e' || character == 'i' || character == 'o' || character == 'i'){
                 cout<<"It is lowercase vowel letter.";
           }else
                   { cout<<"It is a lowercase consonant.";
                   }
        }
}
else if(isdigit(character)) 
{
    if(character % 2 == 0)
    {
     cout<<"It is an even digit number.";
     }else{
         cout<<"It is an odd digit number.";
         }
}else{
     cout<<"It is a special  character.";
     }
 return 0;
}
