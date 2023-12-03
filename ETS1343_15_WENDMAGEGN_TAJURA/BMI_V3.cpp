//BMI calculator
#include<iostream>
#include<math.h>
using namespace std;
int main(){

    //declare the variable
    float wight, hight, BMI;
    char gender;
    int numOfPerson;
    //Decide the number of person how many you want to calculate BMI.
    cout<<"How many person do you want to calculate BMI? n = ";
    cin>>numOfPerson;
    for(int i=1; i <= numOfPerson; i++){
        cout<<"Person "<<i<<" Information is:"<<endl;
        //Take some data from the user to calculate BMI.
        cout<<"Please verify your gender (M/F): \n";
        cin>>gender;
        cout <<"Please enter the weight in Kilogram: ";
        cin >>wight;
        cout <<"Please enter the hight in Meter: ";
        cin >>hight;
        //BMI calculater function
        BMI = (wight)/(hight*hight);
        if(gender == 'M' || gender == 'm'){
            cout<<"Your gender is Male."<<endl;
            //After calculate the BMI decide the healthy of body conditions.
            if(BMI < 20.5){
                cout<<"Your BMI is: "<<BMI<<" Kg/m^2"<<" you are Under weight. "<<endl;
            }else  if(BMI >= 20.5 && BMI<=25 ){
                cout<<"Your BMI is: "<<BMI<<" Kg/m^2"<<" Your are Normal."<<endl;
            }else if(BMI > 25 && BMI <= 30){
                cout<<"Your BMI is: "<<BMI<<" Kg/m^2"<<" Your are Over weight."<<endl;
            }else {
                cout<<"Your BMI is: "<<BMI<<" Kg/m^2"<<" Your are Obesity."<<endl;
            }
        } else if(gender == 'F' || gender == 'f'){
            cout<<"Your gender is Female."<<endl;
            if(BMI < 18.5){
                cout<<"Your BMI is: "<<BMI<<" Kg/m^2"<<" you are Under weight. "<<endl;
            }else  if(BMI >= 18.5 && BMI<=24 ){
                cout<<"Your BMI is: "<<BMI<<" Kg/m^2"<<" Your are Normal."<<endl;
            }else if(BMI > 24 && BMI <= 30){
                cout<<"Your BMI is: "<<BMI<<" Kg/m^2"<<" Your are Over weight,"<<endl;
            }else {
                cout<<"Your BMI is: "<<BMI<<" Kg/m^2"<<" Your are Obesity."<<endl;
            }
            //When you enter the wrong information the program remaind you.
        }else {
            cout<<"Invalid input, Please Enter The Correct Data.\n";
        }
    }
 return 0;
}
