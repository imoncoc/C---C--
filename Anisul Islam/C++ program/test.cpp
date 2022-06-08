#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int a,b,x,y;
   float c,z,sum1,sum2,result;
   cin>>a>>b>>c;
   cin>>x>>y>>z;

   sum1= (float)b*c;
   sum2= (float)y*z;

   result= sum1+sum2;







   cout<<fixed;
   cout<<setprecision(2)<<"VALOR A PAGAR: R$ "<<result<<endl;


    return 0;
}
