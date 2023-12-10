#include<iostream>
using namespace std;
int main(){
    int i, numOfStudent;
    cout<<"Enter the number of student: ";
    cin>>numOfStudent;
    for(i=1; i <=numOfStudent; i++){
        cout<<"\nThe student =>"<<i<<":- "<<endl;
        
    int mark, test, quiz, project, assignment, finalExam;
    char grade;
    string name;
    // Function to calculate and display the grade based on the student's overall marks
    
    cout<<"Enter the student name: ";
    cin>>name;
    cout<<"Enter the student result with the range of:  "<<endl;
    cout<< "Test out of 15%: ";
    cin>>test;
    cout<<"Quiz out of 5%:  ";
    cin>>quiz;
    cout<< "Project out of 20%: ";
    cin>>project;
    cout<<"Assignment out of 10%: ";
    cin>>assignment;
    cout<< "Final exam out of 50%:  ";
    cin>>finalExam;
    cout<<"The student name is: "<<name<<endl;
    
    mark = test + quiz + project + assignment + finalExam;
    cout<<"The mark of the student in number is: "<<mark<<endl;
    
    if(mark >=90 && mark <= 100){
        cout<<"The grade of the student is A+.\n";
        cout<<"Excellent!! keep it up.";
    }else if(mark >=80 && mark < 90){
        cout<<"The grade of the student is A.\n ";
        cout<<"Very Good!! keep it up.";
    }else if(mark >=75 && mark < 80){
        cout<<"The grade of the student is B+.\n";
        cout<<"Good!! yry to improve.";
    }else if(mark >=60 && mark <75){
        cout<<"The grade of the student is B.\n";
        cout<<"Not bad!! But try to improve.";
    }else if(mark >=55 && mark <60){
        cout<<"The grade of the student is C+.\n";
        cout<<"Bad. Becareful! you should work hard.";
    }else if(mark >=45 && mark < 55){
        cout<<"The grade of the student is C. ";
        cout<<"very Bad. You must study hard!.";
    }else if(mark >=30 && mark <45){
        cout<<"The grade of the student is D.\n";
        cout<<"You are on Red line, You must study very very hard!!.";
    }else if(mark >=0 && mark <30){
        cout<<"The grade of the student is F. ";
        cout<<"You are Failed. You must take the course again.";
    }else{
        cout<<"Invalid input. Please, enter the mark 0 upto 100";
    }
}
    return 0;
}
