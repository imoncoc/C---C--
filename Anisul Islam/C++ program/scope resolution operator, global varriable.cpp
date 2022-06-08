#include<iostream>
using namespace std;

int x=50;
int main()
{
    int x=10;
    cout<<"Local varriable X = "<<x<<endl;

//global variblbe declear "::".
    cout<<"Gobal varriable X = "<<:: x<<endl;
    //if you want to change global varible .

    ::x=100;
    cout<<"After changeing Gobal varriable X = "<<::x<<endl;

    return 0;
}
