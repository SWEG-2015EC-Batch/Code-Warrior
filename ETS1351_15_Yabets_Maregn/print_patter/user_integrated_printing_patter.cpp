#include <iostream>
using namespace std;
int main()
{
    char op; 
    int b, d, e;
    b=d=e= 10;
    cout<<"choose dimension. \n a -- rectangle \n b-- half pyramid \n c --inverted half pyramid \n d-- fliiped half pyramid \n e -- inverse of flipped pyramid \n f -- inverted full pyramid  \n g -- full pyramid \n h -- for all.\n :- ";
    cin>>op;
    switch (op)
    {
    case 'a':
            // to print number from 10-49 in rectangualr 4 by 10 form.
    for (int i = 10; i < 50; i++)
    {
        cout << i << " ";
        int j = j + 1;
        if (j % 10 == 0)
        {
            cout << " " << endl;
        }
    }
    cout << endl;
        break;
    case 'b':
 for (int i1 = 1; i1 <= 49; i1++)
    {
        for (int j1 = 10; j1 <= i1; j1++)
        {
            cout << j1 << " ";
        }
        cout << endl;
    }
    cout << endl;
    break;
    case 'c':
  
    for (int i2 = 10; i2 <= 49; ++i2)
    {
        for (int j2 = i2; j2 <= 49; ++j2)
        {
            cout << b << " ";
            b++;
        }
        b = 10;
        cout << "\n";
    }
    cout << endl;
    break;
    case 'd':
for (int i3 = 10; i3 <= 49; i3++)
    {
        for (int j3 = 10; j3 <= (59 - i3); j3++)
        {
            cout << "   ";
        }
        for (int h3 = 10; h3 <= i3; h3++)
        {
            cout << h3 << " ";
        }
        cout << endl;
    }
    cout << endl;
    break;
    case 'e':
 
    for (int i4 = 10; i4 <= 49; ++i4)
    {
        for (int j4 = 10; j4 <= 49; ++j4)
        {
            if (j4 >= i4)
            {
                cout << d << " ";
                d++;
            }
            else
            {
                cout << "   ";
            }
        }
        d = 10;
        cout << "\n";
    }
    break;
    case 'f':

    for (int i5 = 10; i5 <= 49; ++i5)
    {
        for (int j5 = 10; j5 <= 49; ++j5)
        {
            if (j5 >= i5)
            {
                cout << e << " ";
                e++;
            }
            else
            {
                cout << " ";
            }
        }
        e = 10;
        cout << "\n";
    }
    cout << endl;
    break;
    case 'g':
 for (int i6 = 1; i6 <= 49; i6++)
    {
        for (int j6 = 49 - i6; j6 >> 0; j6--)
        {
            cout << " ";
        }
        for (int h6 = 1; h6 <= i6; h6++)
        {
            cout << h6 << " ";
        }
        cout << endl;
    }
    break;
    case 'h':
      for (int i = 10; i < 50; i++)
    {
        cout << i << " ";
        int j = j + 1;
        if (j % 10 == 0)
        {
            cout << " " << endl;
        }
    }
    cout << endl;
    for (int i1 = 1; i1 <= 49; i1++)
    {
        for (int j1 = 10; j1 <= i1; j1++)
        {
            cout << j1 << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i2 = 10; i2 <= 49; ++i2)
    {
        for (int j2 = i2; j2 <= 49; ++j2)
        {
            cout << b << " ";
            b++;
        }
        b = 10;
        cout << "\n";
    }
    cout << endl;
    for (int i3 = 10; i3 <= 49; i3++)
    {
        for (int j3 = 10; j3 <= (59 - i3); j3++)
        {
            cout << "   ";
        }
        for (int h3 = 10; h3 <= i3; h3++)
        {
            cout << h3 << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i4 = 10; i4 <= 49; ++i4)
    {
        for (int j4 = 10; j4 <= 49; ++j4)
        {
            if (j4 >= i4)
            {
                cout << d << " ";
                d++;
            }
            else
            {
                cout << "   ";
            }
        }
        d = 10;
        cout << "\n";
    }
    
cout << endl;    for (int i5 = 10; i5 <= 49; ++i5)
    {
        for (int j5 = 10; j5 <= 49; ++j5)
        {
            if (j5 >= i5)
            {
                cout << e << " ";
                e++;
            }
            else
            {
                cout << " ";
            }
        }
        e = 10;
        cout << "\n";
    }
    cout << endl;
    for (int i6 = 1; i6 <= 49; i6++)
    {
        for (int j6 = 49 - i6; j6 >> 0; j6--)
        {
            cout << " ";
        }
        for (int h6 = 1; h6 <= i6; h6++)
        {
            cout << h6 << " ";
        }
        cout << endl;
    }
    break;
    default:
    cout<<"make sure to enter [a, b, c, d, e, f, g, h] only.";
        break;
    }
    return 0;
}
