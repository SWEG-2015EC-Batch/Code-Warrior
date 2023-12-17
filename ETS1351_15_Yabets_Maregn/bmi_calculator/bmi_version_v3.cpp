#include <iostream>

using namespace std;
int main(){
     //in this code bmi stands for body mass index
    float weight, height, bmi;
   int i, num;
    cout<<"for how many person do you want to calculate:- ";
    cin>>num;
    
    //bmi can be calculted by dividing the weight in kilogram by height squred in meter. 
    
    for ( i = 1; i <=num ; i++)
    {
        cout<<"enter weight in kilogram:- ";
    cin>>weight;
    cout<<"enter height in meter:- ";
    cin>>height;
    
    
        bmi = weight/(height*height);
        cout<<"BMI = "<<bmi<<endl;
    }
    
    return 0;
}
