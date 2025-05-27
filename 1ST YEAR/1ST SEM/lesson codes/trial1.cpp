#include<iostream>

using namespace std;

int main(){
    int sum = 0, nctr = 0, number;

    while (nctr<3)
    {
        std::cout<<"enter number: "; cin>>number;
        sum = sum+number;
        nctr=nctr+1;
    }
    
    cout<<"OUTPUT: 2"<<sum<<endl;
    system("pause");
    return 0;
}

