#include<iostream>
using namespace std;
int main()
{
    int a[1005],i,n,j;

    cin>>n;

    for(i=0,j=0;i<1000;i++,j++)
    {
        if (n==j)
        {
            j=0;
        }

        cout<<"N["<<i<<"] = "<<j<<endl;

    }


    return 0;
}
