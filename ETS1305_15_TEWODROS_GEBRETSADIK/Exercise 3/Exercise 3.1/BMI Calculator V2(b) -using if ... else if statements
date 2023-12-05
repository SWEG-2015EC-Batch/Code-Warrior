//BMI calculator using if ...else if statements

#include <iostream>
using namespace std;

int main() {
    float height, weight, bmi;
    char gender;

    cout << "Enter your height in meters: ";
    cin >> height;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout<<"Enter your gender (M or F): ";
    cin>>gender;

    bmi = weight / (height * height);
       
 if(gender=='M' && bmi<20.5){
     
     cout << "Your Body Mass Index is: " << bmi <<" Kg/m^2"<< ", you are male and under weighted.";
     
    }else if((gender=='M') && (bmi<=20.5 && bmi>25)){
       
       cout << "Your Body Mass Index is: " << bmi <<" Kg/m^2"<< ", you are male and normal weighted.";
       
    }else if((gender=='M')&&(bmi>=25 && bmi<30)){ 
    
    cout << "Your Body Mass Index is: " << bmi <<" Kg/m^2"<< ", you are male and over weighted.";
    
 }else if((gender=='F') && (bmi<18.5)){
      
     cout << "Your Body Mass Index is: " << bmi <<" Kg/m^2"<< ", you are male under weighted.";
     
    }else if((gender=='F') && (bmi<=18.5 && bmi>24)){
       
       cout << "Your Body Mass Index is: " << bmi <<" Kg/m^2"<< ", you female normal weighted."; 
    }else if(bmi>=24 && bmi<30){ 
    cout << "Your Body Mass Index is: " << bmi <<" Kg/m^2"<< ", you are female over weighted.";
    
    }else if((gender=='M' || gender=='F') && (bmi>=30)){cout << "Your Body Mass Index is: " << bmi <<" Kg/m^2"<< ", you are obese.";
    
 }else{
    cout<<"Please enter M if you are male or F if you are female.";
    }
    
    return 0;
}
