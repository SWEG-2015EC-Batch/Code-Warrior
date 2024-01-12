#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int array1[size] = {1, 2, 3, 4, 5};
    int array2[size] = {1, 2, 3, 4, 5};
    bool areIdentical = true;

    for (int i = 0; i < size; ++i) 
    {
        if (array1[i] != array2[i]) 
        {
            areIdentical = false;
            break;
        }
    }

    if (areIdentical) 
    {
        cout << "Arrays are identical.\n";
    } else {
        cout << "Arrays are not identical.\n"; }

    return 0;
}
