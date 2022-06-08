#include<iostream>
using namespace std;
void display(int num)
{
    num = 20;
}
void displayreference(int *num)
{
    *num = 40;
}

int main()
{
    int x = 10;
    cout<<"X = "<<x<<endl;

    display(x);
    //if you passing arguments then x doesn't any change.

    cout<<"After passing arguments 'X' = "<<x<<endl;

    int y =20;
    cout<<"Y = "<<y<<endl;

    //if you pass reference then it will change y value. look 1 and 2 closely.
    displayreference(&y);
    cout<<"After passing Reference 'Y' = "<<y<<endl;


    return 0;
}
