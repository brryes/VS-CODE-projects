#include <iostream>
#include <cmath>

using namespace std;

void areaOfSquare(double &side, double &area) {
    cout << "AREA OF SQUARE\n____________________________";
    cout << "\nEnter the side of the square: ";
    cin >> side;
    area = side * side;
}
void areaOfRectangle(double &length, double &width, double &area) {
    cout << "AREA OF RECTANGLE\n____________________________";
    cout << "\nEnter the length and width of the rectangle: ";
    cin >> length >> width;
    area = length * width;
}
void areaOfTriangle(double &base, double &height, double &area) {
    cout << "AREA OF TRIANGLE\n____________________________";
    cout << "\nEnter the base and height of the triangle: ";
    cin >> base >> height;
    area = 0.5 * base * height;
} 
void areaOfCircle(double &radius, double &area) {
    cout << "AREA OF CIRCLE\n____________________________";
    cout << "\nEnter the radius: ";
    cin >> radius;
    area = M_PI * radius * radius; 
}

int main() {
    char ans = 'N';
    double side, area;

        int choice;
        cout << "*****************************\nMENU\n*****************************\n[1.] Area of Square\n[2.] Area of Rectangle\n[3.] Area of Triangle\n[4.] Area of Circle\n[5.] Exit\n";
        cout << "____________________________\nEnter your choice (1-5):\n____________________________ ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double side, area;
                areaOfSquare(side, area);
                cout << "\nThe area is " << area << " sq. units" << endl;
                break;
            }
            case 2: {
                double length, width, area;
                areaOfRectangle(length, width, area);
                cout << "\nThe area is " << area << " sq. units" << endl;
                break;
            }
            case 3: {
                double base, height, area;
                areaOfTriangle(base, height, area);
                cout << "\nThe area is " << area << " sq. units" << endl;
                break;
            }
            case 4: {
                double radius, area;
                areaOfCircle(radius, area);
                cout << "\nThe area is " << area << " sq. units" << endl;
                break;
            case 5: {
                cout << "Thank you!";
                break;
            }
            }
            default:
                cout << "Please only select from numbers 1 to 5\n";
        }

    return 0;
}