#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x=3,y;

    y=++x;
    cout<<x<<endl;
    cout<<y<<endl;

    y=x++;

    cout<<x<<endl;
    cout<<y<<endl;

    y=--x;
    cout<<x<<endl;
    cout<<y<<endl;

    y=x--;
    cout<<x<<endl;
    cout<<y<<endl;



    getch();
}
