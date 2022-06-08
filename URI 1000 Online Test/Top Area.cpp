#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,count=0;

     long double a[15][15],sum;

    string n,S,M;

    cin>>n;

    for (i=0; i<12; i++)
    {
        for (j=0; j<12; j++)
        {
            cin>>a[i][j];
        }
    }


    for (i=0; i<12; i++)
    {
        for (j=0+(i+1); j<12-(i+1); j++)
        {
            //cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<endl;
            sum+=a[i][j];
            count++;
        }
    }


    if (n=="S")
    {
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else if (n=="M")
    {
        cout<<fixed<<setprecision(1)<<(double)sum/30.0<<endl;
    }


    return 0;
}


