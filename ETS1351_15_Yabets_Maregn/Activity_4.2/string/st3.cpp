#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string name;

    char first[52], first_char, last_char;

    cout << "Enter text: ";
    getline(cin, name);
    first_char = 'A';
    first[0] = 'A';
    for (int i = 1; i < 26; i++)
    {

        ++first_char;
        first[i] = first_char;
    }
    last_char = 'a';
    first[27] = 'a';
    for (int i = 28; i < 52; i++)
    {
        ++last_char;
        first[i] = last_char;
    }
    for (int i = 0; i <= name.length() - 1; i++)
    {
        
        for (int j = 0; j <= 54; j++)
        {
            if (name[i] == first[j])
            {
                cout << name[i];
            }
        }
    }
  return 0;
}
