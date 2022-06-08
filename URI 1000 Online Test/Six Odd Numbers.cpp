#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>> n;

    if (n%2==0)
    {
        for (i=n+1;i<n+12;i=i+2)
    {
     cout<<i<<endl;
    }

    }

    else if (n%2==1)
    {
        for (i=n;i<n+12;i=i+2)
        {
           cout<<i<<endl;
        }
    }





    return 0;
}
