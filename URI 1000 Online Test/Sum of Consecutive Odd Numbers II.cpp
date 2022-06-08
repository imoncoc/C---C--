#include<iostream>
using namespace std;
int main()
{
    int n1,n2,temp,x,i;

    cin>>x;

    for (i=0;i<x;i++)
    {
        int sum=0;
       cin>>n1>>n2;

    if (n1>n2)
    {
        temp=n1;
        n1=n2;
        n2=temp;
    }

    for (n1=n1+1;n1<n2;n1++)
    {
         if (n1<0)
         {
            if ((n1 * -1) % 2 == 1)
            {
                sum += n1;
            }
         }

        else if (n1%2==1)
        sum += n1;
    }

       cout<<sum<<endl;
    }





    return 0;
}
