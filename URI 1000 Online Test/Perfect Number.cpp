#include<iostream>
using namespace std;
int main()
{
    int x,i,n,sum,j;
    cin>>x;

    for(j=0;j<x;j++)
    {
        int temp=0;
        cin>>n;

    for(i=1;i<n;i++)
    {
        if (n%i==0)
        {
            sum=n/i;
            temp = temp+i;

        }

    }

    if (n==temp)
    {
        cout<<n<<" eh perfeito"<<endl;
    }
    else
    {
       cout<<n<<" nao eh perfeito"<<endl;
    }



    }






    return 0;
}
