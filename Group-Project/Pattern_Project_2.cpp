// FINAL PROJECT: Movie Theater Seat Reservation System
// MADE BY: CODE WARRIORS
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

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

    int i, j, n;
    

    // Use for loop to form the Required PATTERN

    int size;

    cout << "Make sure the input must be one digit number other wise the program will terminate.";
    cout << "\nEnter the Size of pattern 1 up to 9 : ";
    cin >> size;

    cout << "\n------------------------------------------------------------------------\n";
    // Print the full name of the user

   
    // use if case the check validation
    cout << "\tYou have successfully form DIAMOND SHAPE PATTERN\n\n";

    if (size < 10)
    {
        for (int row = 0; row <= size; row++)
        {
            int x = 0;
            if (row == 0)
            {
                x = -1;
            }

            for (int i = 0; i <= size - row + x; i++)
            {

                cout << row;
            }
            for (int j = 1; j <= 2 * row - 1; j++)
            {
                cout << " ";
            }

            for (int i = size - row; i >= 0; i--)
            {
                cout << row;
            }
            cout << endl;
        }

        for (int row = size - 1; row >= 0; row--)
        {
            int x = 0;
            if (row == 0)
            {
                x = -1;
            }
            for (int i = 0; i <= size - row + x; i++)
            {

                cout << row;
            }
            for (int j = 1; j <= 2 * row - 1; j++)
            {
                cout << " ";
            }
            for (int i = size - row; i >= 0; i--)
            {
                cout << row;
            }

            cout << endl;
        }
    }
    else
    {
        cout << "Sorry! the program dose not sopport except one Digit.\nMake sure! the input value range 1 upto 10.";
        return 0;
    }
    return 0;
}
