#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,h,trapezium,Perimetro;

    cin>>a>>b>>h;

    if (a+b<=h || b+h<=a || a+h<=b)
    {
        trapezium= (0.5*(a+b)*h);

       cout<<fixed<<setprecision(1)<<"Area = "<<trapezium<<endl;
    }
    else
    {
        Perimetro = a+b+h;
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<Perimetro<<endl;
    }


    return 0;
}
