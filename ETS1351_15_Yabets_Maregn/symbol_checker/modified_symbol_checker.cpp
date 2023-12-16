#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char key;
   cout<<"Enter a character: ";
    cin>>key;
     if (isdigit(key))
    {
        if (key %2 ==0)
        {
            cout<<"the character you entered is even number. ";
        }
        else
        {
            cout<<"the character you entered is odd number. ";
        }
        
        
    }
    
    else if (isupper(key))
    {
      
        switch (key)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':

            cout<<"the character you entered is uppercase and vowel. ";  
            break;
        
        default:
          cout<<"the character you entered is uppercase and consonant. ";
            break;
        }

    }
    else if (islower(key))
    {
        
        switch (key)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':

            cout<<"the character you entered is lowercase and vowel. ";  
            break;
        
        default:
          cout<<"the character you entered is lowercase and consonant. ";
            break;
        }
    }
    else{
        cout<<"the character you entered is special character. ";
    }
     return 0;  
}
