#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float n,tex=0,money=0,temp=0;
    float sum1= (1000/100)*8, sum2 = (1500/100)*18;
    cin>>n;

    if (n>0 && n<=2000)
    {
        cout<<"Isento"<<endl;
    }

    else if (n>2000 && n<=3000)
    {
        money = n-2000;
        tex = (money/100)*8;
        cout<<fixed<<setprecision(2)<<"R$ "<<tex<<endl;
    }

    else if (n>3000 && n<=4500)
    {
        money = n-3000;
        tex = (money/100)*18;
        temp=tex+sum1;
        cout<<fixed<<setprecision(2)<<"R$ "<<temp<<endl;
    }

    else if (n>4500)
    {
        money = n-4500;
        tex = (money/100)*28;
        temp= sum1+sum2+tex;
        cout<<fixed<<setprecision(2)<<"R$ "<<temp<<endl;
    }

    return 0;
}
