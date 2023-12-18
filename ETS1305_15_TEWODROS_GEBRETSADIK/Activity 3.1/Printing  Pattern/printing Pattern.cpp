#include <iostream>
using namespace std;
int main()
{
  int i, j, h;
  char first_char, op, now_char;

  // to print number from 10-49 in rectangualr 4 by 10 form.
  for (i = 10; i < 50; i++)
  {
    cout << i << " ";
    j = j + 1;
    if (j % 10 == 0)
    {
      cout << " " << endl;
    }
  }
cout<<endl; 
  // to print * in rectangular 4 * 7 form.
  for (i = 0; i <=3; i++)
  {
    for ( j = 1; j <=7; j++)
    {
      cout<<"* ";
    }
    
    cout<<endl;
  }
  cout<<endl;
  
  // to print * in 7by 8 form with hallow .
  for (i = 1; i <= 7; i++)
  {
    for (j = 1; j <= 8; j++)
    {
      if ((i == 1) || (i == 7) || (j == 1) || (j == 8))
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << " " << endl;
  }
cout<<endl;
  // print * in half pyramid form.
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= i; j++)
    {

      cout << "* ";
    }
    cout << endl;
  }
cout<<endl;
  // to print * in inverted half pyramid.
  for (i = 5; i >= 1; i--)
  {
    for (j = i; j >> 0; j--)
    {

      cout << "* ";
    }
    cout << endl;
  }
cout<<endl;
  // to print * in hallow half inverted pyramid.

  for (i = 0; i < 6; i++)
    cout << "* ";

  for (i = 6; i >= 1; --i)
  {
    for (j = 0; j < 6 - i; ++j)
    {
      while (h != (2 * i - 1))
      {
        if (h == 0 || h == 2 * i - 2)
          cout << "*";
        else
          cout << " ";
        h++;
      }
    }
    h = 0;
    cout << endl;
  }
cout<<endl;
  // to print full pyramid.
  for (i = 1; i <= 6; i++)
  {
    for (j = 6 - i; j >> 0; j--)

      cout << " ";
    for (h = 1; h <= i; h++)

      cout << "* ";

    cout << endl;
  }
cout<<endl;
  // to print inverted full pyramid.
  for (i = 6; i >= 1; i--)
  {
    for (j = 6 - i; j >> 0; j--)

      cout << " ";
    for (h = i; h > 0; h--)

      cout << "* ";

    cout << endl;
  }
cout<<endl;
  // to print hallow full pyramid.
  for (i = 1; i <= 6; i++)
  {
    for (j = 1; j <= 2 * 6 - 1; j++)
    {
      if (j <= 6 - i || j >= 6 + i)
      {
        cout << " ";
      }
      else if ((i == 1) || (j == 6 - i + 1) || (j == 6 + i - 1) || (i == 6))
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
cout<<endl;
//to print recrangle from A to x.
  first_char = 'A';
  for (i = 0; i < 4; ++i)
  {
    for (j = 0; j < 6; ++j)
    {
      cout << first_char << ' ';
      ++first_char;

      if (first_char > 'X')
      {
        first_char = 'A';
      }
    }
    cout << '\n';
  }
cout<<endl;
  // to print from 1 to 5 in half pyramid form from right to left.
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5 - i; j++)
    {
      cout << "  ";
    }
    for (h = 1; h <= i; h++)
    {
      cout << h << " ";
    }
    cout << endl;
  }
cout<<endl;
  // to print half pyramid using numbers from 1 to 5.
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
cout<<endl;
  // to print numbers from 1 to 5 in rectangular form.
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
cout<<endl;
  // to print half pyramid using letters from A to E.
  for (i = 1; i <= 5; ++i)
  {
    op = 'A';

    for (j = 1; j <= i; ++j)
    {
      cout << op << ' ';
      ++op;
    }

    cout << '\n';
  }
cout<<endl;
  // to print recrangle from A to E.
  for (i = 0; i < 5; ++i)
  {
    for (now_char = 'A'; now_char <= 'E'; ++now_char)
    {
      cout << now_char << ' ';
    }
    cout << '\n';
  }
  return 0;
}
