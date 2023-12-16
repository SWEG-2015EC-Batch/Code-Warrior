#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char key;
   cout<<"Enter a character: ";
    cin>>key;
     if (isdigit(key))
    {
        cout<<"the character you entered is number. ";
    }
    
    else if (isupper(key))
    {
        cout<<"the character you entered is uppercase. ";

    }
    else if (islower(key))
    {
        cout<<"the character you entered is lowercase. ";
    }
    else{
        cout<<"the character you entered is special character. ";
    }
     return 0;  
}
