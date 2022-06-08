#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   double a,b,c;
   cin>>a>>b>>c;
   double TRIANGULO,CIRCULO,pi=3.14159,TRAPEZIO,QUADRADO,RETANGULO;

   TRIANGULO = .5*a*c;
   CIRCULO = pi*c*c;
   TRAPEZIO = .5*(a+b)*c;
   QUADRADO = b*b;
   RETANGULO = a*b;


    cout<<fixed;
   cout<<setprecision(3)<<"TRIANGULO: "<<TRIANGULO<<endl;

   cout<<fixed;
   cout<<setprecision(3)<<"CIRCULO: "<<CIRCULO<<endl;

   cout<<fixed;
   cout<<setprecision(3)<<"TRAPEZIO: "<<TRAPEZIO<<endl;

   cout<<fixed;
   cout<<setprecision(3)<<"QUADRADO: "<<QUADRADO<<endl;

   cout<<fixed;
   cout<<setprecision(3)<<"RETANGULO: "<<RETANGULO<<endl;


    return 0;
}

