#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x, y, z;
    cout<<"enter the number to raise:- ";
    cin>>x;
    cout<<"enter raising number:- ";
    cin>>y;
    z = pow(x, y);
    cout<<x<<" the power of "<<y<<" is "<<z;
    return 0;
}
