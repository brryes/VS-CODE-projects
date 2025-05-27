#include <iostream>


using namespace std;
int main(){
    int sum, x;
    //sum = 0;
    cout<<"Enter a number: ";
    cin>>x;
    while (x != 99)
    {
        sum = sum+x;
        cin>>x;
    }
    cout<<"The sum: "<<sum;
    return 0;
   
}



