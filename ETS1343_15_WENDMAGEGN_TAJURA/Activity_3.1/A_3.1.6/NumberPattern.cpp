#include<iostream>

using namespace std;
int main(){
        int i;
        cout<<"The Number Pattern look like:\n\n";
        for(i=10; i<=49; i++){
            cout<<i<<" ";
      //Be sure the pattern jump to the next line after fillful the first row count 10 digit.
            if(i%10 == 9 || i == 49){
            cout<<endl;
            }
         }
    cout <<endl;
    return 0;
}
