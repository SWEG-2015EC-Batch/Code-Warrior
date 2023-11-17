#include <iostream>
using namespace std;
int main(){
    double amt_char,amt_transferring_data , time_taken, time_taken_indays;
    // 1 char = 1 byte, so 960 char = 960 bytes.
    
    cout<<"1 char = 1 byte"<<endl;
    
    amt_char = 960;
    cout<<"960 char = 960 byte so it takes 1 second to transfer 960 bytes. "<<endl;
    amt_transferring_data = 419430400;
    time_taken = amt_transferring_data/ amt_char;
    time_taken_indays = time_taken / (60 * 60 * 24);
    cout<<"number of seconds to transfer "<<amt_transferring_data<<" bytes is "<<time_taken<<" seconds"<<endl;
    cout<<"in days it might take "<<time_taken_indays<<" days";
    
    return 0;
}
