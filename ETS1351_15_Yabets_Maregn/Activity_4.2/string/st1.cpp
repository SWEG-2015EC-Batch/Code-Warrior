#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string name;
    int vowel = 0, cons = 0;
    cout << "Enter text: ";
    getline(cin, name);
    

    for (int i = 0; i < name.length(); i++)
    {
        
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
        {

            vowel++;
        }
        else if ((name[i] == ' ') || (name[i] == ',') || (name[i] == '.'))
        {
        }

        else
        {

            cons++;
        }
    }
    cout<<"the amount of vowel in this sentence is:-  "<<vowel<<endl;
     cout<<"the amount of consonant in this sentence is:-  "<<cons<<endl;
  return 0;
}
