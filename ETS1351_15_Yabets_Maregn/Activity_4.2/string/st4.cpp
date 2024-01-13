#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    int count = 0;
    cout << "Enter your name: ";
    getline(cin, name);

   for (int i = 0; i <name.length() ; i++)
   {
    if (name[i] == ' ')
    {
        cout<<endl;
    }
     
    cout<<name[i];
   }
  return 0; 
}

