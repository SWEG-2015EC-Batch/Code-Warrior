#include <iostream>
#include <vector>
#include <string.h>
#include <string>
using namespace std;
int main(){
    char days[7][10] = {"Monday", "Teusday", "Wednsday", "Thursday", "Friday", "Saterday", "Sunday" };
    cout<<"\nThe Size of the String: ";
    cout<<strlen(days[0])<<endl;
    cout<<"The Day of the Weekend: "<<endl;
    for(int i=0; i<7; i++){
        for(int j=0; j<10; j++){
            cout<<days[i][j];
        }
        cout<<", \t";
    }
    char myWeekend [7][10] = {{"Excelent"}, {"Amezing"}, {"Good"}, {"Very Bad"}, {"Boring"}, {"Not Bad"} };
    cout<<"\n\nThe Size of the Strings: ";
    cout<<strlen(myWeekend[3])<<endl;
    cout<<"The My Weekend Looks like: "<<endl;
    for(int i=0; i<7; i++){
        for(int j=0; j<10; j++){
        cout<<myWeekend[i][j];
        }
        cout<<"  \t";
    }
    string months[12]= {"Jan", "Feb", "March", "April", "May", "Jun", "Julay", "Agu"};
    cout<<"\n\nThe size of the String: ";
    cout<<months[2].size();    
    cout<<"\nThe Months of the New Year 2024: "<<endl;
    for(int i=0; i<12; i++){
        cout<<months[i]<<" \t";
    }
    return 0;
}
