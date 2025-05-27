#include <iostream>
#include <cmath>
//reyes, sofia beatrice alexa,  AN11 BSCSSE

using namespace std;
//add,subtract, multiply, divide, modulus
void displaySum() {
    double num1, num2, result;
    cout << "Enter your two integer numbers: ";
    cin >> num1 >> num2;
    result = num1  num2;
    cout << "Result: " << result << endl;
}

void computeDifference() {
    double num1, num2, result;
    cout << "Enter your two integer numbers: ";
    cin >> num1 >> num2;
    result = num1 - num2;
    cout << "Result: " << result << endl;
}

void displayProduct() {
    double num1, num2, result;
    cout << "Enter your two integer numbers: ";
    cin >> num1 >> num2;
    result = num1 * num2;
    cout << "Result: " << result << endl;;
}

void displayQuotient() {
    double num1, num2, result;
    cout << "Enter your two integer numbers: ";
    cin >> num1 >> num2;
    result = num1/num2;
    cout << "Result: " << result << endl;;
}

void displayModulus() {
    int num1, num2, result;
    cout << "Enter your two integer numbers: ";
    cin >> num1 >> num2;
    result = num1 % num2;
    cout << "Result: " << result << endl;;
}


int main() {
    char ans = 'Y';

do
{
    int choice;
    cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n";
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            displaySum();
            break;
        case 2:
            computeDifference();
            break;
        case 3:
            displayProduct();
            break;
        case 4:
           displayQuotient();
            break;
        case 5:
            displayModulus();
            break;
        default:
            cout << "Please only select from numbers 1 to 5\n";
        }
    cout<< "Press y or Y to continue\n";
    cin >> ans;
} while ((ans == 'Y') || (ans == 'y'));
   
   
return 0;
}
    

   


   