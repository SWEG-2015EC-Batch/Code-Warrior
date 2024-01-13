#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    string scoreLevels[5] = {"Fail", "Poor", "Fair", "Very Good", "Excellent"};
    cout<<"How many students Total mark do you wan? n = ";
    cin>>n;
    cout << "Enter the total marks for " << n << " students:\n";
    float totalMarks[n];
    for(int i=0; i<n; i++){
        
        cout<<"Student "<<i+1<<": ";
        cin>>totalMarks[i];
        
    }

    cout<<"\nStudents Mark and Score Level.\n";
    cout << "----------------------------\n";
    cout << "Mark\t\tScore Level\n";
    cout << "----------------------------\n";
    for(int i=0; i<n; i++){
        cout << totalMarks[i] << "\t\t";

        if (totalMarks[i] >= 80) {
            cout << scoreLevels[4] << "\n";
        } else if (totalMarks[i] >= 60) {
            cout << scoreLevels[3] << "\n";
        } else if (totalMarks[i] >= 50) {
            cout << scoreLevels[2] << "\n";
        } else if (totalMarks[i] >= 40) {
            cout << scoreLevels[1] << "\n";
        } else {
            cout << scoreLevels[0] << "\n";
        }
    }

    return 0;
}
