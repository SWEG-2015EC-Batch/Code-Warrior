#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string name, vow, con, spe;
    int vowel = 0, cons = 0, special = 0, v = 0, c = 0, s = 0;
    cout << "Enter text: ";
    getline(cin, name);

    for (int i = 0; i < name.length(); i++)
    {

        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
        {

            vowel++;
            vow[i] = name[i];
        }
        else if ((name[i] == ' ') || (name[i] == ',') || (name[i] == '.') || (name[i] == '/') || (name[i] == '|') || (name[i] == '+'))
        {
            special++;
            spe[i] = name[i];
        }

        else
        {
            cons++;
            con[i] = name[i];
        }
    }

    for (int j = 0; j < vowel; j++)
    {

        for (int i = 0; i < vowel; i++)
        {

            if (vow[i] == vow[j])
            {

                v++;
                if (j > 1)
                {
                    for (int k = 0; k < vowel - 2; k++)
                    {
                        if (vow[k] == vow[j])
                        {
                            v -= 1;
                        }
                    }
                }
            }
        }
    }
    for (int j = 0; j < cons; j++)
    {
        for (int i = 0; i < cons; i++)
        {
            if (con[i] == con[j])
            {

                c++;
                if (j > 1)
                {
                    for (int k = 0; k < cons - 2; k++)
                    {
                        if (con[j]==con[k])
                        {
                            c--;
                        }
                    }
                }
            }
        }
    }
    for (int j = 0; j < special; j++)
    {
        for (int i = 0; i < special; i++)
        {
            if (spe[i] == spe[j])
            {

                s++;
                if (j > 1)
                {
                    for (int k = 0; k < special - 2; k++)
                    {
                        if (spe[k] == spe[j])
                        {
                            s -= 1;
                        }
                    }
                }
            }
        }
    }
    cout << "number of vowel frequency = " << v << endl;
    cout << "number of consonant frequency = " << c << endl;
    cout << "number of special char frequency = " << s << endl;
  return 0;
}
