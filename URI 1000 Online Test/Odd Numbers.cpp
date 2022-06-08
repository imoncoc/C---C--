#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c,d,e,f,sum=0;
    int count=0;
    cin>>a>>b>>c>>d>>e>>f;

    if (a>=0)
    {
        count++;
        sum=sum+a;
    }
    if (b>=0)
    {
        count++;
        sum=sum+b;
    }
    if (c>=0)
    {
        count++;
        sum=sum+c;
    }
    if (d>=0)
    {
        count++;
        sum=sum+d;
    }
    if (e>=0)
    {
        count++;
        sum=sum+e;
    }
    if (f>=0)
    {
        count++;
        sum=sum+f;
    }

    cout<<count<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<sum/count<<endl;





    return 0;
}
