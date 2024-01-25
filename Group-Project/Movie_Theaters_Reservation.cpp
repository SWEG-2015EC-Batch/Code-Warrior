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
        
        switch (choice) {
            case 1:
                // Display initial seating arrangement
                cout << "  ";
                for (int i = 1; i <= Col; i++) {
                   cout << setw(4) << i;
                }
                cout << endl;

               for (int i = 0; i < 3; i++) {
                  cout << static_cast<char>('A' + i) << " ";

                  for (int j = 0; j < Col; j++) {
                     cout << setw(4) << (seats[i][j] ? "X" : "-");
                  }
                  cout <<endl;
              }
             // Check the validation of the user input entered
                
                cout<<"\nEnter here Your Full Name: ";
                cin.ignore(); // Ignore the newline character in the input buffer
                getline(cin, fullName);
                cout << "Enter here Your Age: ";
                cin >> age;

                cout << "Enter Row (A-C): ";
                cin >> row;
                cout << "Enter Column (1-10): ";
                cin >> col;

                if (row < 'A' || row > 'C' || col < 1 || col > 10) {
                    cout << "Enter valid Row or Column (capital letter from A - C and numbers from 1-10)\n";
                    continue;
                }

                // Reservation logic
                if (seats[row - 'A'][col - 1]) {
                    cout << "\nSeat is already booked. Please choose a free seat from below:\n";
                    continue;
                } else {
                    seats[row - 'A'][col - 1] = true;
                    cout << "\nYou have booked the seat successfully" << std::endl;
                }

                cout << "Enter Your preferred genre: \n\t1. Comedy\n\t2. Tragedy\n\t3. Horror and Adventure\n\t4. Romance\n";
                cout<<"Genre: ";
                cin >> genre;

                
                cout<<"\nEnetr the amount of payment: $";
                cin>>price;
                if(price <= 149.9 ){
                    cout<<"You entered balance is insufficent! please try again with enough amount of balance.\n";
                    continue;
                }else{
                    cout<<"\t\t\nThankyou! Your Payment is successfully completed.\n";
                    
                }
                tax = price*0.15; //Taxs for the legal service 15 % 

                cout<<"\n\t=========================================";
                cout << "\n\t\t **AASTU CINEMA CENTER**\n\n";
                cout << "\t\t\tMOVIE TICKET\n";
                cout << "\tUser Name: "<<fullName;
                cout<<"\n\tUser Age: "<<age;

                // Generate a random unique ID
                srand(static_cast<unsigned int>(time(nullptr)));
                uniqueId = rand() % 100 + 1;

                cout << "\n\tUnique ID: #ACW" << col << row << uniqueId ;

                switch (genre) {
                    case 1:
                        cout << "\n\tGenre: Comedy\n\tDay: Thursday at 7:00pm";
                        break;
                    case 2:
                        cout << "\n\tGenre: Tragedy\n\tDay: Saturday at 9:00am";
                        break;
                    case 3:
                        cout << "\n\tGenre: Horror and Adventure\n\tDay: Saturday at 3:00pm";
                        break;
                    case 4:
                        cout << "\n\tGenre: Romance\n\tDay: Saturday at 8:00pm";
                        break;
                    default:
                        cout << "\n\tYour choice is invalid. Please make sure to enter a valid choice from 1 to 4";
                        continue;
                }
                
                cout << "\n\tSet place is VIP Set: " << row << "#" << col <<endl;
                cout<<"__________________________________________________________";
                cout<<"\n\tYour Payment: $"<<price;
                cout<<"\n\tTax rate: $"<<tax<<endl;
                cout<<"__________________________________________________________";
                cout << "\nIf you want additional information, please do not hesitate to contact us here.\n";
                cout << "\n\tTele: +2519******12\n\tEmail: student@aastu.edue.et\n";
                cout<<"===================================================================\n";

                // Display updated seating arrangement
                cout << "  ";
                for (int i = 1; i <= Col; i++) {
                    cout << setw(4) << i;
                }
                cout << endl;

                for (int i = 0; i < 3; i++) {
                    cout << static_cast<char>('A' + i) << " ";

                    for (int j = 0; j < Col; j++) {
                        cout << setw(4) << (seats[i][j] ? "X" : "-");
                    }
                    cout << endl;
                }
            
            break;
        
        case 2:

            //seats[][Col] = seats[7][Col];
            seats[7][Col] = {false};

            // Display initial seating arrangement
            cout << "  ";
            for (int i = 1; i <= Col; i++) {
                cout << setw(4) << i;
            }
            cout << endl;

            for (int i = 0; i < 7; i++) {
                cout << static_cast<char>('D' + i) << " ";

                for (int j = 0; j < Col; j++) {
                    cout << setw(4) << (seats[i][j] ? "X" : "-");
                }
                cout <<endl;
            }
                // Check the validation of the user input entered
                
                cout<<"\nEnter here Your Full Name: ";
                cin.ignore(); // Ignore the newline character in the input buffer
                getline(cin, fullName);
                cout << "Enter here Your Age: ";
                cin >> age;

                cout << "Enter Row (D-J): ";
                cin >> row;
                cout << "Enter Column (1-10): ";
                cin >> col;

                if (row < 'D' || row > 'J' || col < 1 || col > 10) {
                    cout << "Enter valid Row or Column (capital letter from D - J and numbers from 1-10)\n";
                    continue;
                }

                // Reservation logic
                if (seats[row - 'D'][col - 1]) {
                    cout << "\nSeat is already booked. Please choose a free seat from below:\n";
                    continue;
                } else {
                    seats[row - 'D'][col - 1] = true;
                    cout << "\nYou have booked the seat successfully" << endl;
                }

                cout << "Enter Your preferred genre: \n1. Comedy\n2. Tragedy\n3. Horror and Adventure\n4. Romance\n";
               
                cout<<"Genre: ";
                cin >> genre;

                cout<<"\nEnetr the amount of payment: $";
                cin>>price;
                if(price <= 119 ){
                    cout<<"You entered balance is insufficent! please try again with enough amount of balance.\n";
                    continue;
                }else{
                    cout<<"\t\t\nThankyou! Your Payment is successfully completed.\n";
                    
                }
                tax = price*0.15; //Taxs for the legal service 15 % 

                cout<<"\n\t=========================================";
                cout << "\n\t\t **AASTU CINEMA CENTER**\n\n";
                cout << "\t\t\tMOVIE TICKET\n";
                cout << "\tUser Name: "<<fullName;
                cout<<"\n\tUser Age: "<<age;

                // Generate a random unique ID
                srand(static_cast<unsigned int>(time(nullptr)));
                uniqueId = rand() % 100 + 1;

                cout << "\n\tUnique ID: #ACW"  << col<< row << uniqueId<<"\n";

                switch (genre) {
                    case 1:
                        cout << "\tGenre: Comedy\n\tDay: Thursday at 7:00pm";
                        break;
                    case 2:
                        cout << "\n\tGenre: Tragedy\n\tDay: Saturday at 9:00am";
                        break;
                    case 3:
                        cout << "\n\tGenre: Horror and Adventure\n\tDay: Saturday at 3:00pm";
                        break;
                    case 4:
                        cout << "\n\tGenre: Romance\n\tDay: Saturday at 8:00pm";
                        break;
                    default:
                        cout << "\n\tYour choice is invalid. Please make sure to enter a valid choice from 1 to 4";
                        continue;
                }
                
                cout << "\n\tSet place is VIP Set: " << row << "#" << col <<endl;
                cout<<"________________________________________________________________";
                cout<<"\n\tYour Payment: $"<<price;
                cout<<"\n\tTax rate: $"<<tax<<endl;
                cout<<"________________________________________________________________";
                cout << "\nIf you want additional information, please do not hesitate to contact us here.\n";
                cout << "\n\tTele: +2519******12\n\tEmail: student@aastu.edue.et\n";
                cout<<"=========================================================================\n\n";

                // Display updated seating arrangement
                cout << "  ";
                for (int i = 1; i <= Col; i++) {
                    cout << setw(4) << i;
                }
                cout << endl;

                for (int i = 0; i < 7; i++) {
                    cout << static_cast<char>('D' + i) << " ";

                    for (int j = 0; j < Col; j++) {
                        cout << setw(4) << (seats[i][j] ? "X" : "-");
                    }
                    cout << endl;
                }
            
            
            break;
        case 3:
            cout<<"Thankyou! "<<"To use this program, We will in touch soon agian.";
            break;
    
        default:
            cout<<"Invalid input, Please Enter the correct choice from 1 and 2.\n";
            break;
    }
            
    }//While loop

return 0;
}
