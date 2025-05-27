#include<iostream>
#include<cmath>
using namespace std;

int main(){

int decimal, binary = 0, remainder, product = 1;
  // Since the data type is int, it can only accept values up to 1023 before switching to long.
  cout<<"BINARY TO DECIMAL CONVERSION"<<endl;
  cout<<endl;
  cout<<"Enter a number [1-1023]: ";
  cin >> binary;
  while (binary != 0) {
    remainder = binary % 10;
    decimal = decimal + (remainder * product);
    binary = binary / 10;
    product *= 2;
  }
  cout << "The number in the decimal form is: " << decimal ;
  return 0;

}