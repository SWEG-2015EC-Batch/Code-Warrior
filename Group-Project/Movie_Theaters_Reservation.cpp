#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct User {
    string fullName, username, password, securityWord;
    int age;
};

int main() {
    vector<User> users;

    cout << "----------------------------------------------------------------------------------\n";
    cout << "\t\t\t\t WELCOME TO AASTU CINEMA\n";
    cout << "----------------------------------------------------------------------------------\n";
    cout << "-----------------------------------------------------------------------------------\n";
    cout << "\t\tADDIS ABABA SCIENSCES AND TECHNOLOGY UNIVERSITY\n";
    cout << "\t\t\tUNIVERSITY FOR INDUSTRY\n";
    cout << "\t\t   DEPARTMENET OF SOFTWARE ENGINEERING\n";
    cout << "-------------------------------------------------------------------------------\n";
    cout << "\t\t\t    This project Designed by CODE WORRIES Team\n";
    cout << "________________________________________________________________________________\n";
    cout << "\n\t\t\t      AASTU CINEMA Movie center Registration page\n\n";
    cout << "\t\t\t                           MENU\n\n";

    while (true) {
        int choice1;
        cout << "\t| Press 1 to LOGIN               |\n";
        cout << "\t| Press 2 to REGISTER            |\n";
        cout << "\t| Press 3 to FORGOT PASSWORD     |\n";
        cout << "\t| Press 4 to EXIT                |\n";
        cout << "\n\t\t Please, select your choices: ";
        cin >> choice1;
        cout << endl;

        switch (choice1) {
            case 1:
                {
                    string username, password;
                    cout << "\t\t Enter username: ";
                    cin >> username;
                    cout << "\t\t Enter Password: ";
                    cin >> password;

                    bool found = false;
                    for (const User& user : users) {
                        if (user.username == username && user.password == password) {
                            found = true;
                            break;
                        }
                    }

                    if (found) {
                        cout << "\nYou Login Successfully completed\n";
                    } else {
                        cout << "LOGIN Error!\nPlease, check your userId and password.\n";
                    }
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
                    cout << "\n\n";
                    cout << "\t\t Please, enter the username and password here to Register: " << endl;
                    cout << "\t\t Enter Username: ";
                    cin >> newUser.username;
                    cout << "\t\t Enter Password: ";
                    cin >> newUser.password;
                    cout << "Enter the Security Word (Special Word) for Password recovery: ";
                    cin >> newUser.securityWord;

                    users.push_back(newUser);
                    cout << "\n\t\t Registration is Successful! \n";
                }
                break;

            case 3:
                {
                    string username, securityWord;
                    cout << "\t\t You forgot the Password? do not worries!\n";
                    cout << "\t\t Enter your username: ";
                    cin >> username;

                    bool found = false;

                    for (User& user : users) {
                        if (user.username == username) {
                            found = true;
                            cout << "Security word: " << user.securityWord << endl;
                            cout << "Enter Security Word: ";
                            cin >> securityWord; // Search for existing account by Security Word
                            if (securityWord == user.securityWord) {
                                cout << "\n Your account is found!\n";
                                cout << "Your Password: " << user.password << endl;
                            } else {
                                cout << "Incorrect Security Word!\n";
                            }
                            break;
                        }
                    }

                    if (!found) {
                        cout << "\n\t Sorry! Your account is not found!\n";
                    }
                }
                break;

            case 4:
                cout << "\t\t\t The Program Exit. Thank you! for using the Program.";
                return 0;

            default:
                cout << "\t\t Invalid choice. Please select from the options given.\n";
                continue;
        }
        cout<<endl;
    }

return 0;
}
