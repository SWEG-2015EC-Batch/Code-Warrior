#include<iostream>
#include<string>
using namespace std;
int main(){
   char answer[10] = {'a', 'b', 'a', 'c', 'd','a', 'b', 'a', 'c', 'd'} ;
   char test[10];
   int score=0;
   string suffix;
   for (int i = 0; i < 10; i++)
   {
   cout<<"enter answer for question number "<<i+1<<" :- ";
   cin>>test[i];
   }
   for (int i = 0; i < 10; i++)
   {
    if (answer[i] == test[i])
    {
       score++;
    }
    
   }
   
   cout<<"test score = "<<score<<endl;
   for (int i = 0; i < 10; i++)
   {
     if (answer[i] == test[i])
    {
       suffix = "correct";
    }
    else
    {
        suffix = "incorrect ";
        
    }
    
    
   cout<<test[i]<<" and it is "<<suffix;
   cout<<endl;
   
   }
   cout<<"answer sheet"<<endl;
   for (int i = 0; i < 10; i++)
   {
    
   cout<<"for question number "<< i+1<< " answer = "<<answer[i]<<endl;
   }
   
   return 0;
}
