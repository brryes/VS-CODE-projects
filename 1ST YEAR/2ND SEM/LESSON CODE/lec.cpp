#include <iostream>
using namespace std;
//function with argument but no return value
//passing parameter, tinatawag from function to main
void dispNum(int x, float y){ //sa loob ng parenthesis nagdedeclare ng parameter sa code na to
    cout << "the integer value is: " << x << endl ;
    cout << "the double number is: " << y << endl;
}

int main(){
    int num1 = 100;
    double num2 = 100.90; //logic error if int din nakalagay, double dapat yan kasi float yung nasa parameter
    
    dispNum(num1, num2);
}
