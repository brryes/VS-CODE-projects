// factorial
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) {
        return 1; 
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;

    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    cout << "The factorial of " << number << " is " << factorial(number) << endl;

    return 0;
}