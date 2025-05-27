//REYES SOFIA BEATRICE ALEXA, an11
// 2
#include<iostream>
#include<cmath>

using namespace std;
// function to calculate the area of rectangle
float Area_Rectangle(float width, float length) {
     float Area_Rectangle = width * length; 
     return Area_Rectangle; 
}

// function to calculate the area of circle
float Area_Circle(float radius) {
     float Area_Circle = M_PI * pow(radius, 2); 
     return Area_Circle; 
}

int main() {
    int num;

    cout << "Choose a shape to solve:\n";
    cout << "1 - Circle\n";
    cout << "2 - Rectangle \n";
    cout << "Enter the number (1/2): ";
    cin >> num;

    switch (num) { // Convert input to uppercase
        case 1:
            float radius, circ;
            cout << "You selected Circle." << endl;
            cout<<"Enter radius: ";
            cin>> radius;
            circ = Area_Circle(radius);
            cout<<"The area of the circle is: "<<circ<<endl;
            break;

        case 2:
            float length, width, rec;
            cout << "You selected Rectangle." << endl;
            cout<<"Enter length and width:\n";
            cin>>length;
            cin>>width;
            rec = Area_Rectangle(length, width);
            cout<<"The area of rectangular is: "<<rec<<endl;
            break;
    }

    return 0;
}
    

