//REYES SOFIA BEATRICE, AN11
#include<iostream>
#include<cmath>

using namespace std;
// function to calculate the area of rectangle
float Area(float width, float length) {
     float Area = width * length; 
     return Area; 
}

int main(){
    float length, width, rec;
            cout << "You selected Rectangle." << endl;
            cout<<"Enter length and width:\n";
            cin>>length;
            cin>>width;
            rec = Area(length, width);
            cout<<"The area of rectangular is: "<<rec<<endl;
    
    return 0;

}
