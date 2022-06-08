#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,count=0;

     long double a[15][15],sum;

    string m,S,M;

    cin>>m;

    for (i=0; i<12; i++)
    {
        for (j=0; j<12; j++)
        {
            cin>>a[i][j];
        }
    }


    for (i=0; i<12; i++)
    {
        for (j=0; j<i; j++)
        {
            //cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<endl;
            sum+=a[i][j];
            count++;
        }
    }


    if (m=="S")
    {
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else if (m=="M")
    {
        cout<<fixed<<setprecision(1)<<(double)sum/66.0<<endl;
    }


    return 0;
}
