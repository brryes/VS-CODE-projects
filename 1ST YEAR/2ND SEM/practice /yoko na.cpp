// Example No.1

// #include <iostream>
// #include <string>

// using namespace std;

//     float add(float a, float b);
//     float subtract(float a, float b);
//     float multiply(float a, float,   b);
//     float divide(float a, float b); 

// int main(){
//     float num1,num2, ans;
//     char operation;

//     cout<<"ENTER NUMBER NAMO: ";
//     cin>>num1>>num2;
//     cout<<"pili: ";
//     cin>>operation;

//     switch (operation)
//     {
//     case '+':
//         ans = add(num1, num2);
//         cout<< ans;
//         break;

//     case '-':
//         ans = subtract(num1, num2);
//         cout<< ans;
//         break;

//     case '*':
//         ans = multiply(num1, num2);
//         cout<< ans;
//         break;

//     case '/':
//         ans = divide(num1, num2);
//         cout<< ans;
//         break;
        
//     default:

//     cout <<"pili ka iba haahahha";
//         break;
//     }


// }

// float add(float a, float b){
//     return a + b;
// }
// float subtract(float a, float b){
//     return a - b;
// }

// float multiply(float a, float b){
//     return a * b;
// }

// float divide(float a, float b){
//     return a / b;
// }

// Example No.2

// #include<iostream>
// #include<string>

// using namespace std;

// void planet(string planet, int moons){
//     cout<< planet << "has " << moons << " moons." << endl;
// }

// int main(){

//     planet("Mercury ", 0);
//     planet("Venus ", 0);
//     planet("Earth ", 1);
//     planet("Mars ", 2);
//     planet("Jupiter ", 95);
//     planet("Saturn ", 82);
//     planet("Uranus ", 27);
//     planet("Neptune ", 14);

//     return 0;


// }

// #include <iostream>
// #include <string>

// using namespace std;

// void MyName(string fname, string lname) {
//     cout << fname << lname;
// }

// int main() {
//     MyName("Sofia ", "Reyes");

//     return 0;
// }


//add all odd numbers
#include <iostream>
#include <string>
using namespace std;
int main(){
    int arr[5], sum = 0;

for (int i = 0; i < 5; i++){
    cout<<"enter num: " ;
    cin>>arr[i];
}
for (int i = 0; i < 5; i++){
    if (arr[i] %2 != 0)
    sum+=arr[i];
}
cout<<"sum: "<< sum << endl;
}


//ODD numbersssssss----------------
// using namespace std;
// int main(){
//     int arr[10];

// for (int i = 0; i < 10; i++){
//     cout<<"enter num: " ;
//     cin>>arr[i];
// }
// cout<<"odd # are: ";
// for (int i = 0; i < 10; i++){
//     if (arr[i] %2 != 0)
//     cout<<arr[i] << " ";
// }


// return 0;
// }

//SUMMMMMMMMMM----------------
// int main(){
//     int arr[5], sum = 0;

// for (int i = 0; i < 5; i++){
//     cout<<"enter num: ";
//     cin>>arr[i];
//     sum += arr[i];
// }
// cout<<"output: "<<sum<<endl;
// return 0;
// }


//PRINT EVEN NUMBERS IN AN ARRAY OF 10 ELEMENTS
// #include <iostream>

// using namespace std;

// void evenposition(int arr[], int size){
//     cout<<"The even numbers are: ";
//     for (int i = 0; i < size; i++){
//         if (arr[i] % 2 == 0)
//         cout<<arr[i]<< " ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[10];
//     cout<<"Enter 10 numbers: "<<endl;
//     for (int i = 0; i < 10; i++)
//         cin>>arr[i];
    
//     evenposition(arr,10);

//     return 0;
    
// }