#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
    double area,width,height;

    cout<<setw(20)<<"Enter Width : ";
    cin>>width;

    cout<<setw(20)<<"Enter Height : ";
    cin>>height;

    area = width*height;

    cout<<setw(20)<<"Area of Rectangle = "<<area;


    getch();
}
