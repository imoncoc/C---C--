#include<iostream>
using namespace std;
int main()
{
    int a[100][100],n,i,j,x=1;

    cin>>n;

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (i==j && (i+j)<n )
            {
                cout<<x+i;
            }
            else
            {
               cout<<x;
            }

            if (j==0 && j==n-1)
            {
                continue;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }



    return 0;
}
