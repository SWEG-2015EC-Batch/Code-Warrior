#include<iostream>

using namespace std;
int main(){
    char i, j, rows;
    bool stop = false;
    do{
    cout << "Enter an Alpha bet or a upto z latter of rows for the half pyramid: ";
    cin >> rows;
    
    for(i ='a'; i <= rows; i++){
        for(j = 'a'; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"Entet 0 to exit Or enter 1 to countinue: ";
    cin>>stop;
    }while(stop != 0);
    
    return 0;
}
