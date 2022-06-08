#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int i,j,sum;

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        sum+=a[i][j];

    }

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {

        }
        cout <<endl<<sum<<endl;


    }



    return 0;
}
