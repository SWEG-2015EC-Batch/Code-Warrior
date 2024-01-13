#include <iostream>

using namespace std;
int main()
{
    /*
    Write a program that checks whether two one dimensional arrays of the same size are
identical (have the same elements) or not.
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
    int first[row1][col1], second[row2][col2], check = 1;
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
            if (first[i][j] == second[i][j])
            {
                cout << "row " << i + 1 << " column " << j + 1 << " is same." << endl;
            }
            else

            {
                cout << "row " << i + 1 << " column " << j + 1 << " is not same." << endl;
                check = 0;
            }
        }
    }
    if (check == 0)
    {
        cout << "it is not identical. ";
    }
    else
    {
        cout << "it is identical. ";
    }

    cout << endl
         << endl;

    /*
    Write a C++ program to that accepts a two-dimensional array and displays the multiplication
of row elements and the sum of column elements.
    */
    int nn;
    int Row1, Col1;
    cout << "how many rows do u want to enter for 1st array:- ";
    cin >> Row1;
    cout << "how many colums do u want to enter for the 1st array:- ";
    cin >> Col1;

    int First[Row1][Col1], sum[Col1], muliple[Row1];

    cout << "you will enter " << Row1 * Col1 << " numbers for the first array." << endl;
    for (int i = 0; i < Row1; i++)
    {
        for (int j = 0; j < Col1; j++)
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
            cin >> First[i][j];
        }
    }
    cout << endl;
    int multi = 1;
    cout << endl;
    for (int i = 0; i < Col1; i++)
    {
        multi = 1;
        for (int j = 0; j < Row1; j++)
        {
            multi = First[i][j] * multi;
            muliple[i] = multi;
        }
    }
    for (int i = 0; i < Row1; i++)
    {
        int Sum = 0;
        for (int j = 0; j < Col1; j++)
        {
            Sum += First[j][i];
            sum[i] = Sum;
        }
    }

    for (int i = 0; i < Row1; i++)
    {
        cout << "row" << i + 1 << " multiplication = " << muliple[i] << endl;
    }
    for (int i = 0; i < Col1; i++)
    {
        cout << "column" << i + 1 << " summation = " << sum[i] << endl;
    }
    cout << endl
         << endl
         << endl;
    /*
    Write a program to store exam scores (test, assignment, quiz, project and final). The
    program should determine and print the score level alongside with the total mark in tabular
    format. Score status level for score >=80 Excellent, >=60 Very Good, >= 50 Fair, >=40 poor
    and <40 Fail.
    */
    int crs[30];
    float mark[30][30], test[30][30], quiz[30][30], asmt[30][30], prt[30][30], fnl[30][30];
    string grd[30][30];
    cout << "How many student? ";
    cin >> nn;
    for (int j = 0, i = 1; j < nn; j++, i++)
    {
        cout << " Enter the number of courses for student" << i << ": ";
        cin >> crs[j];
    }
    for (int a = 0; a < nn; a++)
    {
        cout << "for student" << a + 1 << endl;
        for (int b = 0, c = 1; b < crs[a]; c++, b++)
        {
            cout << "course" << b + 1 << ":" << endl;
            cout << "---->Enter the test mark:";
            cin >> test[a][b];
            cout << "---->Enter the quiz mark:";
            cin >> quiz[a][b];
            cout << "---->Enter the assignment mark:";
            cin >> asmt[a][b];
            cout << "---->Enter the project mark:";
            cin >> prt[a][b];
            cout << "---->Enter the final mark:";
            cin >> fnl[a][b];
            mark[a][b] = test[a][b] + quiz[a][b] + asmt[a][b] + prt[a][b] + fnl[a][b];

            if (mark[a][b] <= 100 && mark[a][b] >= 80)
                grd[a][b] = "Excellent";
            else if (mark[a][b] < 80 && mark[a][b] >= 60)
                grd[a][b] = "Very good";
            else if (mark[a][b] < 60 && mark[a][b] >= 50)
                grd[a][b] = "Fair";
            else if (mark[a][b] < 50 && mark[a][b] >= 40)
                grd[a][b] = "Poor";
            else if (mark[a][b] < 40 && mark[a][b] >= 0)
                grd[a][b] = "fail";
            else
                grd[a][b] = "invalid";
        }
    }

    for (int a = 0; a < nn; a++)
    {
        cout << "\n\n for student" << a + 1 << endl;
        for (int b = 0, c = 1; b < crs[a]; c++, b++)
        {
            cout << "\t" << b + 1 << ") " << mark[a][b] << "\t" << grd[a][b] << endl;
        }
    }
    cout << endl
         << endl
         << endl;
    /*
    Write C++ program, to read 3*4 2D-array, find and print the sum of even array elements. The
program should also print even array elements and ‘*’ instead of odd numbers in tabular form
    */
    int arr[3][4];
    int summ = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
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
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] % 2 == 0)
                summ += arr[i][j];
        }
    }
    cout << "Sum of even array elements:- " << summ << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j]%2 != 0)
            {
            arr[i][j] = 0;
            }
            cout << arr[i][j] << "\t";
            if (((i == 0) && (j == 3)) || ((i == 1) && (j == 3)))
            {
                cout << endl;
            }
        }
    }
    cout << endl
         << endl;
    /*
    Suppose indices represent people and that the value at row i, column j of a 2D array is true
just in case i and j are friends and false otherwise. Initialize the 2D array to represent the
following configuration. Then the program counts how many pairs of friends are represented
in the array. Note that each friendship pair appears twice in the array, so in the example
above below there are 6 pairs of friends.
    */
   int countt;
    int frien[5][5] = {{0, 1, 0, 1, 1},
                       {1, 0, 1, 0, 1},
                       {0, 1, 0, 0, 0},
                       {1, 0, 0, 0, 1},
                       {1, 1, 0, 1, 0}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (frien[i][j] != 0){
                countt++;
            }
        }
    }
cout<<"number of pair of friends = "<<countt/2;
    return 0;
}
