#include<iostream>
using namespace std;
int main()
{
    int j, i, n, a[105][105];
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    while(cin>>n)
    {


        for (i = 0; i < n / 2; i++)
        {
            a[i][i] = 1;
            a[n-i-1][n-i-1] = 1;
            for(j = i + 1; j < (n - i - 1); j++)
            {
                a[i][j] = 3;
                a[j][i] = 3;

                a[(n-i-1)][(n-j-1)] = 3;
                a[(n-j-1)][(n-i-1)] = 3;


            }
            a[i][(n-i-1)] = 2;
            a[(n-i-1)][i] = 2;



        }

        if (n % 2 == 1)
        {
            a[(n/2)][(n/2)] = 2;
        }

        for (i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cout<<a[i][j];

            }
            cout<<endl;
        }
    }

    return 0;
}
