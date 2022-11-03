#include <iostream>
using namespace std;

int main (){
    //Variable declaration
    int r, h;
    double Area, Volume;
    const PI = 3.141592;
    // Capture the value of height
    cout<<"The height of Cylinder is\n";
    cin>> h;
    // Capture the value of radius
    cout<<"The radius of Cylinder is\n";
    cin>> r;
    // doing math operation
    Area = 2*PI*r*h+2*PI*r*r;
    Volume = PI*r*r*h;
    cout<<"The Area of Cylinder is: "<<Area<<"\n";
    cout<<"The Volume of Cylinder is: "<<Volume<<;

    return 0;
}