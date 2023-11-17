//While loop demo on a program that convert any letter to its uppercase or lowercase.
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char letter, Letter;
    int choice;
    
    while(true)
    {
        
        cout<<"Enter a letter: ";
        cin>>letter;
        
        while(true)
       {
            cout<<"Choose 1 for uppercase or 2 for lowercase: ";
            cin>>choice;
            if((choice==1) || (choice==2))
            break;
       
                 else
        
           {cout<<"Invalid choice. Please enter 1 or 2.\n";
            }
        }
            if(choice==1)
            {
                Letter = toupper(letter);
                cout<<"The uppercase equivalent to " <<letter<<" is "<<Letter<<".";
            }
            else if(choice==2)
            {
                Letter = tolower(letter);
                cout<<"The lowercase equivalent of "<<letter<<" is "<<Letter<<".";
            }break;
   }
   
return 0;
}             
        