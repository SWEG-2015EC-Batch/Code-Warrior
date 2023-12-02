//BMI calculator and gender identifier
#include <iostream>
using namespace std;

int main() {
    float height, weight, bmi;
    char gender;

    cout << "Enter your height in meters: ";
    cin >> height;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout<<"Enter your gender (1 for male and 2 for female): ";
    cin>>gender;

    bmi = weight / (height * height);

 if(gender=='1'){
   if(bmi<20.5){
     cout << "Your Body Mass Index is: " << bmi <<" Kg/m^2"<< ", you are male and under weighted.";
    }else if(bmi<=20.5 && bmi>25){
       cout << "Your Body Mass Index is: " << bmi <<" Kg/m^2"<< ", you are male and normal weighted."; 
    }else if(bmi>=25 && bmi<30){ 
    cout << "Your Body Mass Index is: " << bmi <<" Kg/m^2"<< ", you are male and over weight.";
    }else{cout << "Your Body Mass Index is " << bmi <<" Kg/m^2"<< ", you are male and obese.";
 }
 }else if(gender=='2'){
      if(bmi<18.5){
     cout << "Your Body Mass Index is: " << bmi <<" Kg/m^2"<< ", you are female and under weighted.";
    }else if(bmi<=18.5 && bmi>24){
       cout << "Your Body Mass Index is: " << bmi <<" Kg/m^2"<< ", you are female and normal weighted."; 
    }else if(bmi>=24 && bmi<30){ 
    cout << "Your Body Mass Index is: " << bmi <<" Kg/m^2"<< ", you are female and over weight.";
    }else{cout << "Your Body Mass Index is: " << bmi <<" Kg/m^2"<< ", you are female and obese.";
    }
 }else{
    cout<<"Please enter 1 if you are male or 2 if you are female.";
    }
    return 0;

}