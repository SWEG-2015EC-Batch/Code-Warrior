#include <iostream>
#include <string>
using namespace std;
int main() {
    string firstName, middleName, lastName;
    //Take full name from the user
        cout<<"Enter your first name: ";
        getline(cin, firstName);
        cout<<"Enter your middle name: ";
        getline(cin, middleName);
        cout<<"Enter your last name: ";
        getline(cin, lastName);

        //Print the full name of the user
    cout<<"Your Full Name is: ";
    cout<<firstName<<" "<<middleName<<" "<<lastName<<endl;
    return 0;
}
