#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,x,y,z,sum;
    x=2;
    y=3;
    z=5;
    cin>>a;
    cin>>b;
    cin>>c;

    sum = ((a*x)+(b*y)+(c*z))/(x+y+z);

    cout<<fixed;
    cout<<setprecision(1)<<"MEDIA = "<<sum;


    return 0;
}

