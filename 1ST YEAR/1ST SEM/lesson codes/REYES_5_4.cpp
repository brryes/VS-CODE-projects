#include <iostream>
using namespace std;

int main() {
    char figures;
    float volume, side, length, width, height, radius, pi=3.14;
    
    cout << "Choose a geometric figure to solve:\n";
    cout << "C - Cube\n";
    cout << "R - Rectangle Prism\n";
    cout << "S - Sphere\n";
    cout << "Enter the letter (C/R/S): ";
    cin >> figures;
//REYES SOFIA BEATRICE ALEXA
    switch (toupper(figures)) { // Convert input to uppercase
        case 'C':
            cout << "You selected a Cube." << endl;
            cout<<"Enter side: ";
            cin>>side;
            volume = side*side*side;
            cout<<"The volume of the cube is: "<<volume;
            break;

        case 'R':
            cout << "You selected a Rectangle Prism." << endl;
            cout<<"Enter length,width,height:\n";
            cin>>length;
            cin>>width;
            cin>>height;
            volume = length*width*height;
            cout<<"The volume of rectangular prism is: "<<volume;
            break;

        case 'S':
            cout << "You selected a Sphere." << endl;
            cout<<"Enter Radius: ";
            cin>>radius;
            volume=(4*pi*radius*radius*radius)/3;
            cout<<"The volume of Sphere is: "<<volume;
            break;
    }

    return 0;
}