#include <iostream>

using namespace std;
int main()
{
    string st[17] = {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "};
    int num = 0, dec = 8, kk = 1;
    int ii[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 10; i++)
    {

        if (num == 0)
        {

            for (int j = 0; j < 19; j++)
            {
                cout << ii[i];
            }
        }
        else if (num >> 0)
        {
            for (int j = dec + 1; j >= 0; j--)
            {
                cout << ii[i];
            }

            for (int k = 0; k < kk; k++)
            {
                cout << st[k];
            }
            kk += 2;
            for (int j = dec + 1; j >= 0; j--)
            {
                cout << ii[i];
            }
        }

        num++;
        dec--;
        cout << endl;
    }
    int qw, wq = 15, as[9] = {8, 7, 6, 5, 4, 3, 2, 1, 0};
    string qa[17] = {" ", " ", " ", " ", " ", " ", " ", " "};
    qw = 2;
    for (int i = 0; i < 9; i++)
    {

        for (int j = 0; j < qw; j++)
        {
            cout << as[i];
        }

        for (int l = wq; l > 0; l--)
        {
            cout << qa[i];
        }
        if (i == 8)
        {
            qw -= 1;
        }

        for (int j = 0; j < qw; j++)
        {
            cout << as[i];
        }
        cout << endl;
        qw += 1;
        wq -= 2;
    }
    return 0;
}
