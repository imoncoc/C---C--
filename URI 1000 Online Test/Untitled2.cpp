#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long double a[15][15], sum;

    int i,j,avg,count=0;

    string S,M,n;

    cin>>n;

    for (i=0;i<12;i++)
    {
        for (j=0;j<12;j++)
        {
            cin>>a[i][j];
        }
    }



    for (i=0;i<12;i++)
    {
        for (j=1+i;j<12;j++)
        {
            //cout<<"a["<<i<<"]["<<j<<"] = "<<a[i][j]<<endl;
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
        cout<<fixed<<setprecision(1)<<(double)sum/66.0<<endl;
    }



    return 0;
}

