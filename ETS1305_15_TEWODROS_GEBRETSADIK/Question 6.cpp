//calculate the time to send a file and the file size in C++
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int transmission_speed = 960; // characters per second
    int file_size = 419430400; // in bytes
    double time_taken;

    time_taken = file_size / transmission_speed; // in seconds

    int days = time_taken / (24 * 3600); // convert seconds to days
    int hours = fmod(time_taken, (24 * 3600)) / 3600; // convert remaining seconds to hours
    int minutes = fmod(time_taken, 3600) / 60; // convert remaining seconds to minutes
    int seconds = fmod(time_taken, 60); // remaining seconds

    cout << "Time taken to send the file: " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" <<endl;

    return 0;
}
