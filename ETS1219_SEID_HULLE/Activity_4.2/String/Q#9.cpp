#include <iostream>
#include <cstring>

using namespace std;

int main() {
  
    char firstProgram[] = "Breaking Bad";
    char secondProgram[50]; 
    strcpy(secondProgram, "Stranger Things");

    cout << "My two favorite television programs are:" << endl;
    cout << "1. " << firstProgram << endl;
    cout << "2. " << secondProgram << endl;

    return 0;
}
