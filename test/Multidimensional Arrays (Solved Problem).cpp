#include<iostream>
using namespace std;
int main()
{
    int a[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0} };
    int i,j,sum=0;
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            sum+=a[i][j];
        }


        cout<<endl;
        sum=0;
    }









    return 0;
}
