#include <iostream>
#include <cmath>

using namespace std;

class Shape {
protected:
    double dimension1;
    double dimension2;

public:
    void get_data() {
        cout << "\nEnter dimensions: ";
        cin >> dimension1 >> dimension2;
    }

    virtual double calculate_area() = 0; 

    void display_area() {
        cout << " = " << calculate_area() << endl;
    }
};

class Triangle : public Shape {
public:
    double calculate_area() override {
        return 0.5 * dimension1 * dimension2;
    }
};

class Rectangle : public Shape {
public:
    double calculate_area() override {
        return dimension1 * dimension2;
    }
};

int main() {
    Triangle triangle;
    Rectangle rectangle;

    cout << "Enter base and height for triangle: ";
    triangle.get_data();
    cout << "Area of triangle is ";
    triangle.display_area();

    cout << "\nEnter length and width for rectangle: ";
    rectangle.get_data();
    cout << "Area of rectangle is ";
    rectangle.display_area();

    return 0;
}
