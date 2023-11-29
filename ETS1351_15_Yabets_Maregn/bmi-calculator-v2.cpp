#include <iostream>
#include <string>
using namespace std;
int main(){
     //in this code bmi stands for body mass index
    float weight, height, bmi;
    string gender;
    cout<<"enter weight in kilogram:- ";
    cin>>weight;
    cout<<"enter height in meter:- ";
    cin>>height;
    cout<<"enter gender(male or female):- ";
    cin>>gender;
    //bmi can be calculted by dividing the weight in kilogram by height squred in meter. 
    bmi = weight/(height*height);
    //chacking gender
    if (gender == "female"){
    //checking BMI scale
       if(bmi<18.5){
            cout<<"Body Mass Index = "<<bmi <<" kg/m^2 and gender = "<<gender<<" and in BMI scale you are underweight.";
       }
       else if(bmi>=18.5 && bmi<24){
        cout<<"Body Mass Index = "<<bmi <<" kg/m^2 and gender = "<<gender<<" and in BMI scale you are normalweight.";
       }
       else if(bmi>=24 && bmi<30){
        cout<<"Body Mass Index = "<<bmi <<" kg/m^2 and gender = "<<gender<<" and in BMI scale you are overweight.";
       }
       else {
        cout<<"Body Mass Index = "<<bmi <<" kg/m^2 and gender = "<<gender<<" and in BMI scale you are obese.";
       }
    }
    else if (gender=="male")
    {
      if(bmi<20.5){
            cout<<"Body Mass Index = "<<bmi <<" kg/m^2 and gender = "<<gender<<" and in BMI scale you are underweight.";
       }
       else if(bmi>=20.5 && bmi<25){
        cout<<"Body Mass Index = "<<bmi <<" kg/m^2 and gender = "<<gender<<" and in BMI scale you are normalweight.";
       }
       else if(bmi>=25 && bmi<30){
        cout<<"Body Mass Index = "<<bmi <<" kg/m^2 and gender = "<<gender<<" and in BMI scale you are overweight.";
       }
       else {
        cout<<"Body Mass Index = "<<bmi <<" kg/m^2 and gender = "<<gender<<" and in BMI scale you are obese.";
       }
    }
    
    else{
        cout<<"make sure to enter male or female in gender section. ";
    }
    return 0;
