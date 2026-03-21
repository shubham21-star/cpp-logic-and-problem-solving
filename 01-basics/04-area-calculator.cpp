#include <iostream>
using namespace std;

int main() {
    float squ, rect, cir, tri;
    float side, len, bre, rad, base, height;

    cout<< "Enter side of square: ";
    cin>> side;
    squ= side*side;
    cout<< "Area of Square: "<< squ <<endl;

    cout<< "Enter lenght & breadth of rectangle: ";
    cin>> len;
    cin>> bre;
    rect= len*bre;
    cout<< "Area of rectangle: "<< rect <<endl;

    cout<< "Enter radius of circle: ";
    cin>> rad;
    cir= 3.14*rad*rad;
    cout<< "Area of circle: "<< cir <<endl;

    cout<< "Enter base & height of triangle: ";
    cin>> base>> height;
    tri= 0.5*base*height
    cout<< "Area of triangle: "<< tri <<endl;

    return 0;
}