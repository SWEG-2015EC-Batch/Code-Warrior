#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char input, letter;
    int x = 0;
    
    while (x == 0){

        cout<<"Please, Enter some Character or Enter 0 to exit. => ";
        cin>>input;
        if (input != '0'){
           if (isalpha(input)){
            cout<<"The Entered  Character is Letter.\n";
           }
           else if(isdigit(input)){
            cout<<"The Entered Character is Number.\n";
           } else {
            cout<<"The Entered Character is Special Character.\n";
           }
        }
        else{
            cout<<"The program exit. Thank You\n";
            
            x = 1;
        }
    }
    
    return 0;
}
