#include<iostream>
#include<cstdlib>
using namespace std;
//p26

int main(){
    int magic, guess;
    magic=rand();
    cout<<"enter your guess ";
    cin>>guess;
    if(guess==magic){
        cout<<"you're right. \n";
        cout<<magic<<"is the magic number";
    }
    else
    { if (guess>magic)
            cout<<"your guess is higher.\n";
        else
            cout<<"your guess is lower.\n";
    }
    return 0;
        
}
