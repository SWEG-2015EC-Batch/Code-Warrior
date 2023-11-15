//A programthat wil calculate how long it willtake to send a file.
#include <iostream>
using namespace std;

int main() {
    
    const int transmissionRate = 960; 
    
    int fileSize;

    cout << "Enter the file size (in characters): ";
    cin >> fileSize;
   
    double timeInSeconds = static_cast<double>(fileSize) / transmissionRate;

    cout << "It will take approximately " << timeInSeconds << " seconds to send the file." <<endl;

    return 0;
}
