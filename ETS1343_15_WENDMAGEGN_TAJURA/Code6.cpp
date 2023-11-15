#include <iostream>
#include <math.h>

using namespace std;
int main(){
const int transmission_speed = 960;
        int file_size;
        cout << "please enterbthe size of the file to be sent in bytes: ";
        cin >>file_size;
        //calculate transmission time
        double time_taken = static_cast<double>(file_size)/(transmission_speed);
        cout << "Estimated time to send the file: " <<time_taken << " seconds" <<endl;


        return 0;
}
