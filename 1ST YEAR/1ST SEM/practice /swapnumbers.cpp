#include<iostream>
// write a program that user inputs a number and swaps the number without using a third variable
using namespace std;

int main(){
    int a, b;
    cout<<"enter 1st number:: ";
    cin >>a;
    cout<<"\nEnter 2nd number";
    cin >>b;

    cout<<"\nBefore swapping, numbers are:: "<<endl;
    cout<<"\n\ta = "<< a <<", b =" <<b<<endl;

    cout<<"\nAfter swapping, numbers are:: "<<endl;
    cout<<"\n\ta = "<< b <<", b =" <<a<<endl;


    return 0;



}