#include <iostream>
using namespace std;
int main(){
     //in this code bmi stands for body mass index
    float weight, height, bmi;
    cout<<"enter weight in kilogram:- ";
    cin>>weight;
    cout<<"enter height in meter:- ";
    cin>>height;
    //bmi can be calculted by dividing the weight in kilogram by height squred in meter. 
    bmi = weight/(height*height);
    cout<<"Body Mass Index = "<<bmi <<" kg/m^2";
    return 0;
