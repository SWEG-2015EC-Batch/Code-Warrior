#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    int total = 0;
    float mean = 0, variance = 0, standardDeviation = 0, sum = 0, sumOfSquares = 0;
            
    cout << "How many data entries will you? n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int mark, frequency;
        
        cout << "Enter the data: ";
        cin >> mark;

        cout << "Enter the data frequency: ";
        cin >> frequency;

        sum += mark * frequency;
        sumOfSquares += frequency*pow(mark - mean, 2);
        total += frequency;
    }

    mean = sum / total;
    variance = sumOfSquares / total;
    standardDeviation = sqrt(variance);
   
    cout << "The mean is: " << mean << endl;
    cout << "The Variance is: " << variance << endl;
    cout << "The Standard Deviation is: " << standardDeviation << endl;

    return 0;
