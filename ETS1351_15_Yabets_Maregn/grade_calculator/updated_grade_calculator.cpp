#include <iostream>
using namespace std;
int main()
{
    float mark, test, quiz, project, assignment, final;
    cout << "enter mark of test:- ";
    cin >> test;
    if (test <= 15 && test >= 0)
    {
        cout << "enter mark of quiz:- ";
        cin >> quiz;
        if (quiz <= 5 && quiz >= 0)
        {
            cout << "enter mark of project:- ";
            cin >> project;
            if (project <= 20 && project >= 0)
            {
                cout << "enter mark of assignemnt:- ";
                cin >> assignment;
                if (assignment <= 10 && assignment >= 0)
                {
                    cout << "enter mark of final:- ";
                    cin >> final;
                    if (final <= 50 && final >= 0)
                    {
                        mark = test + quiz + project + assignment + final;
                        if (mark <= 100 && mark >= 90)
                        {
                            cout << "A+";
                        }
                        else if (mark < 90 && mark >= 80)
                        {
                            cout << "A";
                        }
                        else if (mark < 80 && mark >= 75)
                        {
                            cout << "B+";
                        }
                        else if (mark < 75 && mark >= 60)
                        {
                            cout << "B";
                        }
                        else if (mark < 60 && mark >= 55)
                        {
                            cout << "C+";
                        }
                        else if (mark < 55 && mark >= 45)
                        {
                            cout << "C";
                        }
                        else if (mark < 45 && mark >= 30)
                        {
                            cout << "D";
                        }
                        else
                        {
                            cout << "F";
                        }
                    }
                    else
                    {
                        cout << "final mark is not[0-50], try again. ";
                    }
                }
                else
                {
                    cout << "assignment mark is not[0-10], try again. ";
                }
            }
            else
            {
                cout << "project mark is not[0-20], try again. ";
            }
        }
        else
        {
            cout << "quiz mark is not[0-5] try again. ";
        }
    }
    else
    {
        cout << "test mark is not[0-15] try again.";
    }
    return 0;
}
