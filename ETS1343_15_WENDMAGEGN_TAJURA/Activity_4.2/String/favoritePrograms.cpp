#include<iostream>
#include<cstring>

using namespace std;
const int NUM_PROGRAM = 2;

int main() {
    int i;
    char favoritePrograms [NUM_PROGRAM][40];
    //Initialize the first program at the time of declaration
    strcpy(favoritePrograms[0], "Yebetseb Chewata with EBS");

    //Initialize the second program name using the strcpy() function
    strcpy(favoritePrograms[1], "Sunday with EBS");
    cout<<"MY Favorite Television Programs\n";
    cout << "------------------------------------------\n";
    for(i=0; i<NUM_PROGRAM; i++){
        cout<<"Favorite Program "<<i+1<<": "<<favoritePrograms[i]<<endl;
    }
        cout << "------------------------------------------\n";

    return 0;
}
