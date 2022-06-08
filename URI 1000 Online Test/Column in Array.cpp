#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a[15][15],sum=0;
    int i,j,n;
    string m;

    cin>>n;
    cin>>m;

    for (i=0;i<12;i++)
    {
        for (j=0;j<12;j++)
        {
            cin>>a[i][j];
        }
    }

    for (i=0;i<12;i++)
    {
        sum+=a[i][n];
    }

     if (m=="S")
    {
       cout<<fixed<<setprecision(1)<<(float)sum<<endl;
    }
   else if (m=="M")
   {
       cout<<fixed<<setprecision(1)<<(float)sum/12<<endl;
   }



    return 0;
}
