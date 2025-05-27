#include<iostream>
//page 32
using namespace std;
int main() {
    int no;
    cout<<"Enter a number: ";
    cin>>no;
    switch (no)
    {
    case 1: cout<<"isa";
        break;
    case 2: cout<<"dalawa";
        break;
    case 3: cout<<"tatlo";
        break;
    default: cout<<"invalid input";
        break;
    }
    return 0;
}
