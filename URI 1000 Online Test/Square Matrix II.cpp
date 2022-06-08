#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i,j,a[100][100];

    //freopen("out.txt" , "w", stdout);

    while(cin>>n){
            if (n==0)
            {
                break;
            }

    for (i=0;i<n;i++)
    {
       for (j=0;j<n;j++)
       {
           a[i][j]=j+1;
           a[i][0]= i+1;
           if (i==j)
           {
               a[i][j]=1;
           }
           else if (i<j || i>j)
           {
               a[i][j]= abs(i-j)+1;
           }

       }
    }

     for (i=0;i<n;i++)
    {
       for (j=0;j<n;j++)
       {
           cout<<setw(3)<<a[i][j];
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

