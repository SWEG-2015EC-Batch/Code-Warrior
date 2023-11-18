//A programthat wil calculate how long it willtake to send a file.
#include <iostream>
using namespace std;
int main()
{
    const float transmmitionRate =960;
    int fileSize;
    float time, hour;
    
   
    cout<<"Entet file size: ";
    cin>>fileSize;
    
    time = ( fileSize / transmmitionRate );
    
     hour = time / 3600;
        
    cout<<"The time needed to send this file is approximatly "<<time<<" seconds or "<<hour<<" hours."<<endl;
    
    return 0;
}
