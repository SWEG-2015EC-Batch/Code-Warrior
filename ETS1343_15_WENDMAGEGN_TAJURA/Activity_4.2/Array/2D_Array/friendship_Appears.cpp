#include<iostream>
using namespace std;
int main() {
    int i, j, num;
    cout<<"Enter a Numbers that represent Friends: ";
    cin>>num;
    cout<<"The Friendship Appears twice in the form of Piars:\n";
    cout<<"-------------------\n";
    int friends[num][num];
    int pairOfFriends =0;
    for ( i = 0; i < num; i++){
        for ( j = 0; j < num; j++){
            if (friends[i][j]&friends[j][i]){
                pairOfFriends++;
                cout<<"*"<<" ";
            }else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
    cout<<"-------------------";
    cout<<"\nCounted Pair of Friends: "<<pairOfFriends;
    
    return 0;
}
