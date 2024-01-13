#include <iostream>
#include <cstring>

using namespace std;

int main() {
 
 string tvPrograms[2];


 tvPrograms[0] = "Prison Break";

 
 strcpy(tvPrograms[1], "money Heist");

 
 cout << "My two favorite television programs are: " << endl;
 cout << tvPrograms[0] << endl;
 cout << tvPrograms[1] << endl;

 return 0;
}
