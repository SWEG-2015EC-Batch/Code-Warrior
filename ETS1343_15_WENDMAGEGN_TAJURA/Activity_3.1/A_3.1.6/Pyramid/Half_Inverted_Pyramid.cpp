#include<iostream>

using namespace std;
int main(){
    int i, j, rows;
    bool stop = false;
    do{
    cout << "Enter the number of rows for the half pyramid: ";
    cin >> rows;
    
    for(i = rows; i <= 1; i--){
        for(j = 1; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"Entet 0 to exit Or enter 1 to countinue: ";
    cin>>stop;
    }while(stop != 0);
    
    return 0;
}
