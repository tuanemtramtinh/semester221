#include <iostream>
#include <math.h>
using namespace std;
const double pi =3.14;
double getDiameter(double radius)
{
    return radius*2;
}
double getCircumference(double radius)
{
    return 2*radius*pi;
}
double getArea(double radius)
{
    return radius*radius*pi;
}
int main()
{
    double radius, diameter, circle, area;
    cin>>radius;
    diameter = getDiameter(radius); // Calling getDiameter function
    circle = getCircumference(radius); // Calling getCircumference function
    area = getArea(radius); // Calling getArea function
    cout<<"Diameter of the circle: "<<diameter <<" units"<<endl;
    cout<<"Circumference of the circle: "<< circle<<" units"<<endl;
    cout<<"Area of the circle:"<< area<<" sq. units"<<endl;
    return 0;
}