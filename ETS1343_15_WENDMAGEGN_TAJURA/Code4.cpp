#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main(){
float x, y, result;
       
        cout <<"Enter the x value ";
        cin >>x;
        cout <<"Enter the y value ";
        cin >>y;
        result = pow(x, y);
        cout <<"The  result of the expression is: \n" <<x <<"^" <<y << " = " <<result;

return 0;
}
