#include<iostream>
#include<cstring>
using namespace std;
int main() {
    int n;
    cout << "Enter the Size of Strings: ";
    cin >> n;
    cin.ignore(); // clear the input buffer
    cout<<"Enter the Text: "<<endl;
    char str[n];
        cin.getline(str, n);
    char* point = strtok(str, " ");
    //Output all enterred string
    cout<<"The result is:\n";
        while(point != NULL){
            cout<<point<<endl;
            point = strtok(NULL, " ");
        }

    return 0;
}
