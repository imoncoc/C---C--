#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    double pi,radius,circumference;
    pi=3.1416;

    cout<<setw(27)<<"Enter Radius : ";
    cin>>radius;

    circumference = 2*pi*radius;

    cout<<setw(27)<<"Circumference of circle = "<<circumference;



    getch();
}
