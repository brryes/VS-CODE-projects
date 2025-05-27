#include <iostream>
//pseudo & fcccc
using namespace std;
int main(int argc, char** argv){

    float grade1, grade2, grade3;
    float gradeAvg, gradeSUM;

    system("CLS");
    cout<<"\t\t\t Whatta Grade!!!"<<endl;

    cout<<"Enter grade 1: "; cin>>grade1;
    cout<<"Enter grade 2: "; cin>>grade2;
    cout<<"Enter grade 3: "; cin>>grade3;

    gradeSUM = grade1+grade2+grade3;
    gradeAvg = gradeSUM/3;

    cout<<"The average of three exams is: "<<gradeAvg;
    if(gradeAvg>=70){
        cout<<":-)"<<endl;
    }
    else{
        cout<<":-("<<endl;
    }
        
}