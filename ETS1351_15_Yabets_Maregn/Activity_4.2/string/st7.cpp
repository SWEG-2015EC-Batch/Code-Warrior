#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  
  string name;
  cout << "Enter the name: ";
  getline(cin, name);

  
  sort(name.begin(), name.end());

  
  cout << "The sorted name's letter are: " << name << endl;

  return 0;
}
