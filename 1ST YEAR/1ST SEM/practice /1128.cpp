#include<iostream>

using namespace std;

int recursive_sum(int m, int n){ //m=2, n=4
    if(m==n)
        return m; //to avoid infinite loop, base case
    return m + recursive_sum(m+1, n);
}
//Sum numbers between m-n
int main(){
    int m = 2 , n = 4;
    cout<<"sum is: "<<recursive_sum(m,n);









/*
int sum = 0;
    for (int i = m; i <=n; i++)
      {
        sum += i; 
    }
    
    cout<<"sum is: "<<sum;


*/    

    system("pause>0");
}