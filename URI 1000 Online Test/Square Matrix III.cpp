#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int n,i,j,a[100][100],temp,r;

    //freopen("out.txt" , "w", stdout);

    while(cin>>n){
            if (n==0)
            {
                break;
            }

    int sum=0;

    for (i=0;i<n;i++)
    {
       for (j=0;j<n;j++)
       {

         a[i][j]= pow( 2,(i+j) );

       }
    }

     for (i=0;i<n;i++)
    {
       for (j=0;j<n;j++)
       {
           if (i==(n-1) && j==(n-1) )
           {
            //cout<<"Test : "<<a[i][j]<<endl;
            temp=a[i][j];
            while (temp!=0)
    {
        r=temp%10;
        sum=sum+1;
        temp=temp/10;
    }

           }


       }
    }

     for (i=0;i<n;i++)
    {
       for (j=0;j<n;j++)
       {
           cout<<setw(sum)<<a[i][j];
           if ((j+1)!=n)
           {
               cout<<" ";
           }
       }
       cout<<endl;
    }

    cout<<endl;

    }
    return 0;
}

