#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

const double PI=3.14159;

double area(double radius);
double volume(double volume);

int main()
{
    double radius,a,v;

    cout<<"Enter Radius (in inches): ";
    cin>>radius;

    a=area(radius);
    v=volume(radius);

    cout<<"\n Radius="<<radius<<" inches\n"<<"Area of circle="<<a<<"square inches\n"<<"Volume of sphere="<<v<<"cubic inches\n";

}
double area(double radius)
{
    return(PI*pow(radius,2));
}
double volume(double radius)
{
    return((4.0/3.0)*PI*pow(radius,3));
}