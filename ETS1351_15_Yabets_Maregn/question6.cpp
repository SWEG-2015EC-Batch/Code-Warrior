#include <iostream>
using namespace std;
int main(){
    double amt_char,amt_transferring_data , time_taken;
    // 1 char = 1 byte, so 960 char = 960 bytes.
    
    cout<<"1 char = 1 byte"<<endl;
    
    amt_char = 960;
    cout<<"960 char = 960 byte so it takes 1 second to transfer 960 bytes. "<<endl;
    amt_transferring_data = 419430400;
    time_taken = amt_transferring_data/ amt_char;
    cout<<"number of seconds to transfer "<<amt_transferring_data<<" bytes is "<<time_taken<<" seconds";
    
    return 0;
}
