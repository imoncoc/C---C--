#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,x1,x2,d,e;

    cin>>a>>b>>c;

    d= sqrt ((b*b)-4*a*c);
    cout<<d<<endl;
    // e = sqrt d;

    if (d>0 && a!=0)
    {

        x1= (-b+d)/2*a;
        x2= (-b-d)/2*a;

        cout<<"R1 = "<<x1<<endl;
        cout<<"R2 = "<<x2<<endl;
    }
    else
    {
        cout<<"Impossivel calcular"<<endl;
    }



    cout<<x1<<endl;
    cout<<x2<<endl;



    return 0;
}
