#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,x1,x2;

    cin>>a>>b>>c;

    x1 = (-b + sqrt( (b*b)-( 4*a*c) ) )/ a+a;
    x2 = (-b - sqrt( (b*b)-( 4*a*c) ) )/ a+a;

    if (x1>0 || x1<0 || x2>0 || x2<0)
    {
      cout<<fixed<<setprecision(5)<<"R1 = "<<x1<<endl;
    cout<<fixed<<setprecision(5)<<"R2 = "<<x2<<endl;
    }
    else
    {
        cout<<"Impossivel calcular"<<endl;
    }





    return 0;
}
