#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c, x=2,y=3,z=5,sum=0,num[100],n,i;
    cin>>n;

    for (i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        sum= ((a*x)+(b*y)+(c*z))/(x+y+z);

    cout<<fixed<<setprecision(1)<<sum<<endl;
    }





    return 0;
}
