#include <iostream>
using namespace std;
int main()
{
    /*
    Write a program to declare a 4-by-5 array of integers and initialize with the data 16, 22, 99, 4, 18, -258, 4,
101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16, and 3.
    */
    int arr[4][5] = {16, 22, 99, 4, 18, -258, 4,
                     101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16, 3};
    cout << endl
         << endl;
    /*
    Write a program to input eight integer numbers into an array named temp. As each number is input, add
    the number into a total. After all numbers are input, display the number and their average.
    */
    int temp[8], sum = 0;
    float ave;
    for (int i = 0; i < 8; i++)
    {
        cout << "enter number:- ";
        cin >> temp[i];
        sum += temp[i];
    }
    ave = sum / 8;
    for (int i = 0; i < 8; i++)
    {
        cout << temp[i] << endl;
    }
    cout << "average = " << ave;
    cout << endl
         << endl;
    /*
    Write a C++ program that read and adds equivalent elements of the two-dimensional arrays named first
    and second. The program should print the resulting data elements in table form.
    */
    int n, m;
    int row1, row2, col1, col2;
    cout << "how many rows do u want to enter for 1st array:- ";
    cin >> row1;
    cout << "how many rows do u want to enter for the second array:- ";
    cin >> row2;
    if (row1 > row2)
    {
        n = row1;
    }
    else if (row1 < row2)
    {
        n = row2;
    }
    else if (row1 == row2)
    {
        n = row2;
    }
    else
    {
        cout << "";
    }
    cout << "how many columns do u want to enter for the 1nd array:- ";
    cin >> col1;
    cout << "how many columns do u want to enter for the second array:- ";
    cin >> col2;
    if (col1 > col2)
    {
        m = col1;
    }
    else if (col2 > col1)
    {
        m = col2;
    }
    else if (col1 == col2)
    {
        m = col1;
    }
    else
    {
        cout << "";
    }
    int first[row1][col1], second[row2][col2];
    string suffix;
    cout << "you will enter " << row1 * col1 << " numbers for the first array." << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            if (i == 0)
            {
                suffix = "st";
            }
            else if (i == 1)
            {
                suffix = "nd";
            }
            else if (i == 2)
            {
                suffix = "rd";
            }
            else
            {
                suffix = "th";
            }

            cout << "enter the " << i + 1 << suffix << " row number:- ";
            cin >> first[i][j];
        }
    }
    cout << endl;
    cout << "you will enter " << row2 * col2 << " numbers for the first array." << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            if (i == 0)
            {
                suffix = "st";
            }
            else if (i == 1)
            {
                suffix = "nd";
            }
            else if (i == 2)
            {
                suffix = "rd";
            }
            else
            {
                suffix = "th";
            }
            cout << "enter the " << i + 1 << suffix << " row number:- ";
            cin >> second[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                for (int l = 0; l < m; l++)
                {
                    if (first[i][j] == second[k][l])
                    {
                        cout << first[i][j] << " \t" << 2 * first[i][j] << endl;
                    }
                }
            }
        }
    }
    cout << endl
         << endl;
    /*
    Write a program to input the following values in an array named volts: 11.95, 16.32, 12.15, 8.22, 15.98,
    26.22, 13.54, 6.45, and 17.59. After the data has been entered, have your program display it three column
    in table form:
    */
    float volts[9] = {11.95,
                      16.32,
                      12.15,
                      8.22,
                      15.98,
                      26.22,
                      13.54,
                      6.45,
                      17.59};
    for (int i = 0; i < 9; i++)
    {
        cout << volts[i] << "\t";
        if (i == 2 || i == 5 || i == 8)
        {
            cout << endl;
        }
    }
    cout << endl
         << endl;
    /*
    Design a program that read total mark of a students’ and print the score level with the mark in tabular
    format. Score status level for score >=80 Excellent, >=60 Very Good, >= 50 Fair, >=40 poor and <40 Fail.
    */
    int crs[30], nn;
    float mark[30][30];
    string grd[30][30];
    cout << "How many studennt? ";
    cin >> nn;
    for (int j = 0, i = 1; j < nn; j++, i++)
    {
        cout << " Enter the nnumber of courses for student" << i << ": ";
        cin >> crs[j];
    }
    for (int a = 0; a < nn; a++)
    {
        cout << "for student" << a + 1 << endl;
        for (int b = 0, c = 1; b < crs[a]; c++, b++)
        {
            cout << "---->Enter the mark(out of 100%) of the course " << c << " : ";
            cin >> mark[a][b];
            if (mark[a][b] <= 100 && mark[a][b] >= 80)
                grd[a][b] = "Excellennt";
            else if (mark[a][b] < 80 && mark[a][b] >= 60)
                grd[a][b] = "Very good";
            else if (mark[a][b] < 60 && mark[a][b] >= 50)
                grd[a][b] = "Fair";
            else if (mark[a][b] < 50 && mark[a][b] >= 40)
                grd[a][b] = "Poor";
            else if (mark[a][b] < 40 && mark[a][b] >= 0)
            {
                grd[a][b] = "fail";
            }
            else
            {
                grd[a][b] = "invalid";
            }
        }
    }

    for (int a = 0; a < nn; a++)
    {
        cout << "\n\nfor student" << a + 1 << endl;
        for (int b = 0, c = 1; b < crs[a]; c++, b++)
        {
            cout << b + 1 << ") " << mark[a][b] << "\t" << grd[a][b] << endl;
        }
    }
    cout << endl
         << endl;
    /*
    Write a program that store a list of number and print the even numbers in the array in reverse order they
are entered.
    */
    int n6, even, ct = 0;

    cout << "how many numbers do you want to enter:- ";
    cin >> n6;
    int num[n6], even_num[n6];
    for (int i = 0; i < n6; i++)
    {
        if (i == 0)
        {
            suffix = "st";
        }
        else if (i == 1)
        {
            suffix = "nd";
        }
        else if (i == 2)
        {
            suffix = "rd";
        }
        else
        {
            suffix = "th";
        }

        cout << "enter the " << i + 1 << suffix << " number:- ";
        cin >> num[i];
    }
    for (int i = 0; i < n6; i++)
    {
        even = num[i] % 2;
        if (even == 0)
        {

            even_num[ct] = num[i];

            ct++;
        }
    }

    for (int i = ct - 1; i >= 0; i--)
    {
        cout << even_num[i] << endl;
    }
}
