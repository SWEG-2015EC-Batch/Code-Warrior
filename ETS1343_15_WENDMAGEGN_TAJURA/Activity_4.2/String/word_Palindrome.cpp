#include<iostream>
#include<string>
using namespace std;
int main(){
    const int maxWords = 20; //Maximum Number of Words
    string words[maxWords];
    int numWords;
    cout<<"Enter the Number of Words up to ("<<maxWords<<"): ";
    cin>>numWords;
    cin.ignore(); //clear the input buffer
    if(numWords > maxWords){
        cout<<"Exceeded the Maximum Number of Words."<<endl;
        return 1;
    }
    cout<<"Enter Only ("<<numWords<<") Words:"<<endl;
    for(int i=0; i<numWords; i++){
        cout<<"Word "<<i+1<<": ";
        getline(cin, words[i]);
    }
    for(int i=0; i<numWords; i++){
        string word = words[i];
        int length = word.length();
        bool isPalindrome = true;
        for(int j=0; j<length/2; j++){
            if(word[j] != word[length - j -1]){
                isPalindrome = false;
                break;
            }
        }
        cout<<"The Result of the Inputted Words are: \n";
        if(isPalindrome){
            cout<<word<<" is a Palindrome."<<endl;
        }else{
            cout<<word<<" is Not aPalindrome."<<endl;
        }
    }
    return 0;
}
