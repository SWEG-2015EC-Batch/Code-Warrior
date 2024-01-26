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

    cout << "\n|==================================================================================|\n";
    cout << "|                       WELCOME TO AASTU PATTERN CENETER                            |\n";
    cout << "|-----------------------------------------------------------------------------------|\n";
    cout << "|-----------------------------------------------------------------------------------|\n";
    cout << "|               ADDIS ABABA SCIENSCES AND TECHNOLOGY UNIVERSITY                     |\n";
    cout << "|                           UNIVERSITY FOR INDUSTRY                                 |\n";
    cout << "|                    DEPARTMENET OF SOFTWARE ENGINEERING                            |\n";
    cout << "|-----------------------------------------------------------------------------------|\n";
    cout << "|                This project Designed by CODE WORRIES Team                         |\n";
    cout << "|___________________________________________________________________________________|\n";
    cout << "\n\t\t\t AASTU Program of PATTERN center of Registration page\n\n";
    cout << "\t\t\t     ************** MENU **************\n";

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
        
    int i, j, n;
    string fullName;
    cout<<"Enter here Your Full Name: ";
    cin.ignore();
    getline(cin, fullName);
    
    //Use for loop to form the Required PATTERN

    int size;

    cout<<"Make sure the input must be one digit number other wise the program will terminate.";
    cout<<"\nEnter the Size of pattern 1 up to 9 : ";
    cin>>size;

    cout<<"\n------------------------------------------------------------------------\n";
    //Print the full name of the user
    
    cout<<"\t\tCONGRATULATIONS!: ";
    cout<<fullName<<endl;
    //use if case the check validation
    cout<<"\tYou have successfully form DIAMOND SHAPE PATTERN\n\n";
 
    if(size < 10){
        for(int row =0; row <= size; row++){

        for(int i = 0; i <=size - row; i++){
            cout<<row;
        }
            for(int j =1; j <= 2*row -1; j++){
               cout<<" ";
            }
        for(int i= size-row; i>=0; i--){
            cout<<row;
        }
        cout<<endl;

        }

        for(int row = size - 1; row>= 0; row--){
        for(int i=0; i <= size-row; i++){
            cout<<row;
        }
            for(int j =1; j <= 2*row-1; j++){
               cout<<" ";
            }
        for(int i= size-row; i >=0; i--){
            cout<<row;
        }
        
        cout<<endl;
        }
        }else{
            cout<<"Sorry! the program dose not sopport except one Digit.\nMake sure! the input value range 1 upto 10.";
            return 0;
        }
  }
return 0;
}
