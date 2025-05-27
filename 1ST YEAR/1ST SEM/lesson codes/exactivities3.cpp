#include<iostream>
using namespace std;
//p23
int main(){
    int grade;
    cout<<"enter grade: ";
    cin>>grade;
    if (grade>=91 && grade<=100)
    {
        cout<<"letter grade: A";
    }
    else if (grade>=81 && grade<=90)
    {
        cout<<"letter grade: B";
    }
    else if (grade>=70 && grade<=80)
    {
        cout<<"letter grade: C";
    }
    else if (grade>=0 && grade<=69)
    {
        cout<<"letter grade: F";
    }
    else
    {
        cout<<"you've enter the wrong data";
    }
    return 0;
}