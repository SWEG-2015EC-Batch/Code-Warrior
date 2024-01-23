#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iomanip>
#include <cmath>
    const int Col = 10;
using namespace std;

struct User {
    string fullName, username, password, securityWord;
    int age;
};

int main() {
    vector<User> users;
 
    cout << "\n===================================================================================|\n";
    cout << "|                       WELCOME TO AASTU CINEMA CENETER                             |\n";
    cout << "|-----------------------------------------------------------------------------------|\n";
    cout << "|-----------------------------------------------------------------------------------|\n";
    cout << "|               ADDIS ABABA SCIENSCES AND TECHNOLOGY UNIVERSITY                     |\n";
    cout << "|                            UNIVERSITY FOR INDUSTRY                                |\n";
    cout << "|                      DEPARTMENET OF SOFTWARE ENGINEERING                          |\n";
    cout << "|-----------------------------------------------------------------------------------|\n";
    cout << "|                  This project Designed by CODE WORRIES Team                       |\n";
    cout << "|___________________________________________________________________________________|\n";
    cout << "\n\t\t    AASTU CINEMA Movie center Registration page\n\n";
    cout << "\t\t\t   ******** MENU ********\n";

    while (true) {
        int choice1;
        cout<<"\n************************************************\n";
        cout << "\t| Press 1 to LOGIN               |\n";
        cout << "\t| Press 2 to REGISTER            |\n";
        cout << "\t| Press 3 to FORGOT PASSWORD     |\n";
        cout << "\t| Press 4 to EXIT                |";
        cout<<"\n************************************************\n";

        cout << "\n\t\t Please, select your choices: ";
        cin >> choice1;
        cout << endl;
        
        switch (choice1) {
            case 1:
                {
                    string username, password;
                    for(int i=1; i<=3; i++){
                    cout << "\t\t Enter username: ";
                    cin >> username;
                    cout << "\t\t Enter Password: ";
                    cin >> password;

                    bool found = false;
                    //Check the User account registered before or Not
                    
                        for (const User& user : users) {
                            if (user.username == username && user.password == password) {
                               found = true;
                               break;
                            }
                        }
                     
                        if (found) {
                           cout << "\n\t\tYou Login Successfully completed\n";
                           break;
                        }else {
                           cout << "LOGIN Error!\nPlease, check your userId and password and enter again.\n\n";
                        }
                        cout<<"\t****You have only # "<<3-i<<" # try left****\n";
                    }
                    continue;
                }
                break;

            case 2:
                {
                    User newUser;
                    cout << "\t\t Please, enter your Full Name: ";
                    cin.ignore(); // Added to ignore the newline character
                    getline(cin, newUser.fullName); // Read full name including space

                    cout << "\t\t Please, enter your age: ";
                    cin >> newUser.age;
                    //Checke the User age level suitable to seat to moive what we prepare 
                    if(newUser.age < 18){
                        cout<<"\n=\tSorry! We have not prepared movies for under 18 child yet.\t\t=\n=\tWe will announce you when we update our Program prepare for you level.\t\t=\n=\tThankyou! for being your choice.\t\t=\n";
                        continue;
                    }else{

                        cout << "\n\t\t Please, enter the username and password here to Register: " << endl;
                        cout << "\t\t Enter Username: ";
                        cin >> newUser.username;
                        cout << "\t\t Enter Strong Password like (code@15Worrie6): ";
                        cin >> newUser.password;
                        cout << "Enter the Security Word (Special Word) for Password recovery: ";
                        cin >> newUser.securityWord;
                    }

                    users.push_back(newUser); //Stor the registration information into vector
                    cout << "\n\t\t Registration is Successful!\n\tKnow You can LOGIN into the Page if you want by pressing 1. \n";
                }
                continue; //Continue to Login page when the Registration done

            case 3:
                {
                    string username, securityWord;
                    int age;
                    cout << "\t\t You forgot the Password? do not worries!\n";
                    cout << "\t\t Enter your username: ";
                    //The program terminate if you enter the wrong User Name that dose not much with before you entered
                    cin >> username;
                    cout<<"\t\t Enter Your age: ";
                    cin>>age;//The program terminate if you enter the wrong age that dose not much with before you entered

                    bool found = false;

                    for (User& user : users) {
                        if (user.username == username && user.age == age) {
                            found = true;
                            cout << "\t\t Your Security word: " << user.securityWord << endl;
                            cout << "\t\t Enter Security Word: ";
                            cin >> securityWord; 
                            // Search for existing account by Security Word
                            if (securityWord == user.securityWord) {
                                cout << "\n Your account is found!\n";
                                cout << "Your Password: " << user.password <<"\n"<< endl;
                                continue;
                            } else {
                                cout << "\nIncorrect Security Word! Please Enter the correct again.\n\n";
                            }
                            break;//Go to the menu again
                        }
                    }

                    if (!found) {
                        cout << "\n\t Sorry! Your account is not found! Please, Register again.\n";
                    }
                    continue;
                }
                break;

            case 4:
                cout<<"====================================================================\n";
                cout<<"=\t The Program Exit. Thank you! for using the Program.\t          =";
                cout<<"\n===================================================================";
                return 0;

            default:
                cout << "\t\t Invalid choice. Please select from the options given.\n";
                continue;
        }
        cout<<endl;

        bool seats[3][Col] = { false };

        cout<<"\nChoose your Will (Pleasure) from 1 or 2 other wise Exit the program.\n";
        cout<<"=================================================================================\n";
        cout << "\t1. VIP set with $149 price\n\t2. Standard set with $119 price\n\t3. Exit\n\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        string fullName;
        float price, tax;
        char row;
        int genre, age, col, uniqueId;
            
            //Start here Switch case for the user choices
            
    }

return 0;
}
