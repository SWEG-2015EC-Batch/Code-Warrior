//BMI calculator
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //declare the variable
   float wight, hight, BMI;
    char Male, Female, gender;
       //Take some data from the user to calculate BMI.
        cout<<"Please verify your gender \n";
        cin>>gender;
        cout <<"Please enter the weight Kilogram: ";
        cin >>wight;
        cout <<"Please enter the hight Meter: ";
        cin >>hight;
         

        BMI = (wight)/(hight*hight);
        //After calculate the BMI decide the healthy of body conditions.
        if(gender == 'M' || gender == 'm'){
            cout<<"Your gender is Male."<<endl;
            if(BMI < 20.5){
                cout<<"Your BMI is: "<<BMI<<" Kg/m^2"<<" you are Under weight "<<endl;
            }else  if(BMI >= 20.5 && BMI<=25 ){
                cout<<"Your BMI is: "<<BMI<<" Kg/m^2"<<" Your are Normal"<<endl;
                   }else if(BMI > 25 && BMI <= 30){
                cout<<"Your BMI is: "<<BMI<<" Kg/m^2"<<" Your are Over weight"<<endl;
            }else {
                cout<<"Your BMI is: "<<BMI<<" Kg/m^2"<<" Your are Obesity"<<endl;
            }
        } else if(gender == 'F' || gender == 'f'){
            cout<<"Your gender is Female."<<endl;
            if(BMI < 18.5){
                cout<<"Your BMI is: "<<BMI<<" Kg/m^2"<<" you are Under weight "<<endl;
            }else  if(BMI >= 18.5 && BMI<=24 ){
                cout<<"Your BMI is: "<<BMI<<" Kg/m^2"<<" Your are Normal"<<endl;
                }else if(BMI > 24 && BMI <= 30){
                       cout<<"Your BMI is: "<<BMI<<" Kg/m^2"<<" Your are Over weight"<<endl;
            }else {
                cout<<"Your BMI is: "<<BMI<<" Kg/m^2"<<" Your are Obesity"<<endl;
            }
            //When you enter the wrong information the program remaind you.
        }else {
            cout<<"Invalid input";
        }
return 0;
}
