//BMI calculator for n pepole 
#include <iostream>
using namespace std;

int main() {
    float height, weight, bmi;
    char X;
    
    while(true){
    cout << "Enter your height in meters: ";
    cin >> height;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    
    bmi = weight / (height * height);
 
 
     cout << "The Body Mass Index is: " << bmi <<" Kg/m^2."<< endl;
     
     cout<<"Enter 'x' to stop or Enter any letter to continue: "; 
     cin>>X;
     if(X=='x'){
         break;}else{continue;}
        }
    
    return 0;
}
