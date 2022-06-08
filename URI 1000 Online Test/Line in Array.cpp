#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,n,j, sum=0;
    float a[15][15];
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

   /* for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }

   cout<<endl;*/



    for (j=0;j<12;j++)
    {
        sum=(float)sum+a[n][j];
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
