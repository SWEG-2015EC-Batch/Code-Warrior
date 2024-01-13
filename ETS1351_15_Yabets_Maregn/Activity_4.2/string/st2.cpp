#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    int count = 0;
    cout << "Enter your name: ";
    getline(cin, name);

    for (int i = (name.length() - 1), j = 0; i >= 0, j < name.length(); i--, j++)
    {
        if (name[i] == name[j])
        {
            count++;
        }
    }
    if (count != name.length())
    {
        cout << "it is not palindrome. ";
    }
    else
    {
        cout << "it is plaindrome.";
    }
  return o;
}
