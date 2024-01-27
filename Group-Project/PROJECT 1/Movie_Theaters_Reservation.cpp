//FINAL PROJECT: Movie Theater Seat Reservation System
//MADE BY: CODE WARRIORS 
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

const int Col = 10;
const int MaxUsers = 100; // Maximum number of users or the capacity of the cinema.

struct User
{
    string fullName, username, password, securityWord;
    int age;
};

int main()
{
    User users[MaxUsers]; // Array of User structures
    int userCount = 0;    // Variable to keep track of the number of users count i.e 30 for VIP and 70 for standard seats.

    // a Welcome message
    cout << "|===================================================================================|\n";
    cout << "|                       WELCOME TO AASTU CINEMA CENETER                             |\n";
    cout << "|-----------------------------------------------------------------------------------|\n";
    cout << "|-----------------------------------------------------------------------------------|\n";
    cout << "|               ADDIS ABABA SCIENSCES AND TECHNOLOGY UNIVERSITY                     |\n";
    cout << "|                            UNIVERSITY FOR INDUSTRY                                |\n";
    cout << "|                      DEPARTMENET OF SOFTWARE ENGINEERING                          |\n";
    cout << "|-----------------------------------------------------------------------------------|\n";
    cout << "|-----------------------------------------------------------------------------------|\n";
    cout << "|                  This project was designed by team : CODE WORRIES                 |\n";
    cout << "|___________________________________________________________________________________|\n";

    while (true)
    {
        int choice1;

        do
        {
            
                  
  while(true)
            {
                // Main menu
            cout << "\n\t\t    AASTU CINEMA Movie center Registration page\n\n";
            cout << "\t\t\t        ** MENU **\n";

            cout << "\n\t\t|****************************************|\n";
            cout << "\t\t|\t Press 1 to LOGIN (SIGN IN)      |\n";
            cout << "\t\t|\t Press 2 to REGISTER (SIGN UP)   |\n";
            cout << "\t\t|\t Press 3 to EXIT                 |";
            cout << "\n\t\t|****************************************|\n";
      
            cout << "\n\t\t Please, select your choices: ";
            
          
            cin >> choice1;
            cout << endl;
            
            if (cin.fail())  //if the input is non numerical this will clear the input and ask the user to enter a numerical value
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input. Please enter a numerical value." << endl;
                }
                else
                {
                    // Valid input, break out of the loop
                    break;
                }
            }
            
            if (choice1 != 1 && choice1 != 2 && choice1 != 3)
            {
                cout << "make sure to enter among 1,2 or 3.";
            }

        } while (choice1 != 1 && choice1 != 2 && choice1 != 3);

        switch (choice1)
        {
        case 1:
        {
            // Login page
            string username, password, securityWord;
            int age;

            for (int i = 1; i <= 3; i++)
            {
                cout << "\t\t Enter username: ";
                cin >> username;
                cout << "\t\t Enter Password: ";
                cin >> password;

                bool found = false;

                for (int j = 0; j < userCount; j++)
                {
                    if (users[j].username == username && users[j].password == password)
                    {
                        found = true;
                        cout << "\n\t\tYou Login Successfully completed\n";
                        break;
                    }
                }

                if (found)
                {
                    // if User logged in successfully
                    break;
                }
                else
                {
                    cout << "LOGIN Error!\nPlease, check your userId and password and enter again.\n\n";
                    cout << "\t****You have only # " << 3 - i << " # try left****\n";
                }

                // Check if it's the last attempt third attempt.
                if (i == 3)
                {
                    cout << "You've reached the maximum number of login attempts.\n";
                    cout << "Would you like to reset your password? (Y/N): ";
                    char resetChoice;
                    cin >> resetChoice;

                    if (resetChoice == 'Y' || resetChoice == 'y')
                    {
                        cout << "\t\t Did you forget your password? Don't worry we got you.\n";
              while (true)
                        {
                            cout << "\t\t Enter Security Word: ";
                            cin >> securityWord;
                           bool foundUser = false;

                            for (int k = 0; k < userCount; k++)
                            {
                                if (users[k].username == username && users[k].securityWord == securityWord)
                                {
                                    foundUser = true;
                                    cout << "\t\t Your Security word: " << users[k].securityWord << endl;
                                    cout << "\t\t Enter new Password: ";
                                    cin >> users[k].password;
                                    cout << "\n\t\t Your Password has been reset successfully!\n";
                                    break;
                                }
                            }

                            if (!foundUser)
                            {
                                cout << "\n\t Sorry! Your account is not found!\n";
                                
                                return 0;
                            }
                        }
                    }else{
                        cout << "\n\t You entered No, Sorry! Your account is not found!\n";
                                
                                return 0;
                    }
                }
            }
          }
            break;
        

        case 2:
        {
            // User registration
            if (userCount >= MaxUsers)
            {
                cout << "Maximum number of users reached. Cannot register more users.\n";
                continue;
            }

            User newUser;
            cout << "\t\t Please, enter your Full Name: ";
            cin.ignore();                   // Added to ignore the newline character
            getline(cin, newUser.fullName); // Read full name including space

            while (true)
            {
                cout << "\t\t Please, enter your age: ";
                cin >> newUser.age;

                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input. Please enter a number." << endl;
                }
                else
                {
                    // Valid input, break out of the loop
                    break;
                }
            }
            if (newUser.age < 18)
            {
                cout << "|=======================================================================|";
                cout << "\n| Sorry! We have not prepared movies for under 18 child yet.\t\t|\n";
                cout << "| We will announce you when we update our Program prepare for you level.|";
                cout << " \n| Thank you! for being your choice.\t\t\t\t\t|\n";
                 cout << "|=======================================================================|";
                exit(0);
            }
            else
            {
                cout << "\n\t\t Please, enter the username and password here to Register: " << endl;
                cout << "\t\t Enter Username: ";
                cin >> newUser.username;
                cout << "\t\t Enter Strong Password like (code@15Worrie6): ";
                cin >> newUser.password;
                cout << "Enter the Security Word (Special Word) for Password recovery: ";
                cin >> newUser.securityWord;
            }

            users[userCount++] = newUser; // Add the new user to the array
            cout << "\n\t\t Registration is Successful!\n\t \n";
            break;
        }

        case 3:
        {
            // Exit the program
            cout << "====================================================================\n";
            cout << "=\t The Program Exit. Thank you! for using the Program.\t          =";
            cout << "\n===================================================================";
            return 0;
        }

        default:
            cout << "\t\t Invalid choice. Please select from the options given.\n";
            break;
        }
        cout << endl;

        bool vipSeats[3][Col] = {{false}};      // Array to represent VIP seating arrangement
        bool standardSeats[7][Col] = {{false}}; // Array to represent Standard seating arrangement

        while (true)
        {
            cout << "=================================================================================\n";
            cout << "\t1. VIP set with $149 \n\t2. Standard set with $119 \n\t3. Exit\n\n";
            cout << "Enter your choice: ";
            int choice;
            cin >> choice;

            string fullName;
            float price, tax;
            char row;
            int genre, age, col, uniqueId;

            switch (choice)
            {
            case 1:
            {
                // Display initial VIP seating arrangement all the 30 seats with their update
                cout << "  ";
                for (int i = 1; i <= Col; i++)
                {
                    cout << setw(4) << i;
                }
                cout << endl;

                for (int i = 0; i < 3; i++)
                {
                    cout << static_cast<char>('A' + i) << " ";

                    for (int j = 0; j < Col; j++)
                    {
                        cout << setw(4) << (vipSeats[i][j] ? "X" : "-");
                    }
                    cout << endl;
                }

                // Check if VIP seats are full
                int vipBookedCount = 0;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < Col; j++)
                    {
                        if (vipSeats[i][j])
                        {
                            vipBookedCount++;
                        }
                    }
                }

                if (vipBookedCount >= 30)
                {
                    cout << "Sorry, VIP seats are full. Please choose Standard seats.\n";
                    continue;
                }

                // Continue with reservation logic for VIP seats
                cout << "\nEnter here Your Full Name: ";
                cin.ignore(); // Ignore the newline character in the input buffer
                getline(cin, fullName);
                while (true)
                {
                    cout << "\t\t Please, enter your age: ";
                    cin >> age;

                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Invalid input. Please enter a number." << endl;
                    }
                    else
                    {
                        // Valid input, break out of the loop
                        break;
                    }
                }
                cout << "Enter Row (A-C): ";
                cin >> row;
                cout << "Enter Column (1-10): ";
                cin >> col;

                if (row < 'A' || row > 'C' || col < 1 || col > 10)
                {
                    cout << "Enter valid Row or Column (capital letter from A - C and numbers from 1-10)\n";
                    continue;
                }

                // Reservation logic for VIP seats this logic work through and identify if there are any similar seats and information immediately.
                if (vipSeats[row - 'A'][col - 1])
                {
                    cout << "\nSeat is already booked. Please choose a free seat from below:\n";
                    continue;
                }
                else
                {
                    vipSeats[row - 'A'][col - 1] = true;
                    cout << "\nYou have booked the VIP seat successfully" << endl;
                }

                // Display updated VIP seating arrangement with avaliable seats.
                cout << "  ";
                for (int i = 1; i <= Col; i++)
                {
                    cout << setw(4) << i;
                }
                cout << endl;

                for (int i = 0; i < 3; i++)
                {
                    cout << static_cast<char>('A' + i) << " ";

                    for (int j = 0; j < Col; j++)
                    {
                        cout << setw(4) << (vipSeats[i][j] ? "X" : "-");
                    }
                    cout << endl;
                }
                cout << "Enter Your preferred genre: \n\t1. Comedy\n\t2. Tragedy\n\t3. Horror and Adventure\n\t4. Romance\n";
                cout << "Genre: ";
                cin >> genre;

                cout << "\nEnetr the amount of payment: $";
                cin >> price;
                if (price <= 149.9)
                {
                    cout << "You entered balance is insufficent! please try again with enough amount of balance.\n";
                    continue;
                }
                else
                {
                    cout << "\t\t\nThankyou! Your Payment is successfully completed.\n";
                }
                tax = price * 0.15; // Taxs for the legal service 15 % if any you know

                cout << "\n\t=========================================";
                cout << "\n\t\t **AASTU CINEMA CENTER**\n\n";
                cout << "\t\t\tMOVIE TICKET\n";

                cout << "\tUser Name: " << fullName;
                cout << "\n\tUser Age: " << age;

                // Generate a random unique ID

                cout << "\n\tUnique ID: #AC_" << col << row << "/" << age;

                switch (genre)
                {
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

                cout << "\n\tSeat place is VIP Seat: " << row << "#" << col << endl;
                cout << "__________________________________________________________";
                cout << "\n\tYour Payment: $" << price;
                cout << "\n\tTax rate: $" << tax << endl;
                cout << "__________________________________________________________";
                cout << "\nIf you want additional information, please do not hesitate to contact us here.\n";
                cout << "\n\tTele: +2519******12\n\tEmail: student@aastu.edue.et\n";
                cout << "===================================================================\n";

             break;
            }

            case 2:
            {
                // Display initial Standard seating arrangement
                cout << "  ";
                for (int i = 1; i <= Col; i++)
                {
                    cout << setw(4) << i;
                }
                cout << endl;

                for (int i = 0; i < 7; i++)
                {
                    cout << static_cast<char>('D' + i) << " ";

                    for (int j = 0; j < Col; j++)
                    {
                        cout << setw(4) << (standardSeats[i][j] ? "X" : "-");
                    }
                    cout << endl;
                }

                // Check if Standard seats are full
                int standardBookedCount = 0;
                for (int i = 0; i < 7; i++)
                {
                    for (int j = 0; j < Col; j++)
                    {
                        if (standardSeats[i][j])
                        {
                            standardBookedCount++;
                        }
                    }
                }

                if (standardBookedCount >= 70)
                {
                    cout << "Sorry, Standard seats are full. Please choose VIP seats.\n";
                    continue;
                }

                // Continue with reservation logic for Standard seats
                cout << "\nEnter here Your Full Name: ";
                cin.ignore(); // Ignore the newline character in the input buffer
                getline(cin, fullName);
                while (true)
                {
                    cout << "\t\t Please, enter your age: ";
                    cin >> age;

                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Invalid input. Please enter a number." << endl;
                    }
                    else
                    {
                        // Valid input, break out of the loop
                        break;
                    }
                }

                cout << "Enter Row (D-J): ";
                cin >> row;
                cout << "Enter Column (1-10): ";
                cin >> col;

                if (row < 'D' || row > 'J' || col < 1 || col > 10)
                {
                    cout << "Enter valid Row or Column (capital letter from D - J and numbers from 1-10)\n";
                    continue;
                }

                // Reservation logic for Standard seats
                if (standardSeats[row - 'D'][col - 1])
                {
                    cout << "\nSeat is already booked. Please choose a free seat from below:\n";
                    continue;
                }
                else
                {
                    standardSeats[row - 'D'][col - 1] = true;
                    cout << "\nYou have booked the Standard seat successfully" << endl;
                }

                // Display updated Standard seating arrangement
                cout << "  ";
                for (int i = 1; i <= Col; i++)
                {
                    cout << setw(4) << i;
                }
                cout << endl;

                for (int i = 0; i < 7; i++)
                {
                    cout << static_cast<char>('D' + i) << " ";

                    for (int j = 0; j < Col; j++)
                    {
                        cout << setw(4) << (standardSeats[i][j] ? "X" : "-");
                    }
                    cout << endl;
                }

                cout << "Enter Your preferred genre: \n1. Comedy\n2. Tragedy\n3. Horror and Adventure\n4. Romance\n";

                cout << "Genre: ";
                cin >> genre;

                cout << "\nEnetr the amount of payment: $";
                cin >> price;
                if (price <= 119)
                {
                    cout << "You entered balance is insufficent! please try again with enough amount of balance.\n";
                    continue;
                }
                else
                {
                    cout << "\t\t\nThankyou! Your Payment is successfully completed.\n";
                }
                tax = price * 0.15; // Taxs for the legal service 15 %

                cout << "\n\t=========================================";
                cout << "\n\t\t AASTU CINEMA CENTER\n\n";
                cout << "\t\t\tMOVIE TICKET\n";
                
                    cout << "\tUser Name: " << fullName;
                    cout << "\n\tUser Age: " << age;
                

                // Generate a random unique ID
                cout << "\n\tUnique ID: #AC_" << col << "_" << row << "/" << age;

                switch (genre)
                {
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

                cout << "\n\tSeat place is Standard Seat: " << row << "#" << col << endl;
                cout << "________________";
                cout << "\n\tYour Payment: $" << price;
                cout << "\n\tTax rate: $" << tax << endl;
                cout << "________________";
                cout << "\nIf you want additional information, please do not hesitate to contact us here.\n";
                cout << "\n\tTele: +2519**12\n\tEmail: student@aastu.edue.et\n";
                cout << "=========================================================================\n\n";

                break;
            }

            case 3:
                cout << "Thank you! for using this program, We will be in touch soon again.";
                return 0;

            default:
                cout << "Invalid input, Please Enter the correct choice from 1, 2, or 3.\n";
                continue;
            }
        }
    }

    return 0;
}
