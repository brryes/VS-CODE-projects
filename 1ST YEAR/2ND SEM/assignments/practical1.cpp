#include <iostream>
#include <cmath>
//reyes, sofia beatrice alexa,  AN11 BSCSSE

using namespace std;
//add,subtract, multiply, divide, modulus,POWER
void displaySum() {
    double a, b, c;
    cout << "Enter your two integer numbers: ";
    cin >> a >> b;
    c = a + b;
    cout << "Result: " << c << endl;
}

void computeDifference() {
    double a, b, c;
    cout << "Enter your two integer numbers: ";
    cin >> a >> b;
    c = a - b;
    cout << "Result: " << c << endl;
}

void displayProduct() {
    double a, b, c;
    cout << "Enter your two integer numbers: ";
    cin >> a >> b;
    c = a * b;
    cout << "Result: " << c << endl;
}

void displayQuotient() {
    double a, b, c;
    cout << "Enter your two integer numbers: ";
    cin >> a >> b;
    c = a/b;
    cout << "Result: " << c << endl;
}

void displayModulus() {
    int a, b, c;
    cout << "Enter your two integer numbers: ";
    cin >> a >> b;
    c = a % b;
    cout << "Result: " << c << endl;
}

void displayPower(){
    double a,b, c;
    cout << "Enter a base and exponent: ";
    cin >> a >> b;
    c = pow(a, b);
    cout << "Result: " << c << endl;
}
int main() {
    char ans = 'Y';

do
{
    int choice;
    cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n6. Power\n";
    cout << "Enter your choice (1-6): ";
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
        case 6:
            displayPower();
            break;
        default:
            cout << "Please only select from numbers 1 to 5\n";
        }
    cout<< "Press y or Y to continue\n";
    cin >> ans;
} while ((ans == 'Y') || (ans == 'y'));
   
   
return 0;
}
    

   


   