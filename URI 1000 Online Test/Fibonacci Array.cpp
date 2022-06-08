#include<iostream>
using namespace std;
int main()
{
    unsigned long long int n[65];
    int i;

    n[0]=0;
    n[1]=1;

    for (i=2;i<=60;i++)
    {
        n[i]=n[i-1]+n[i-2];

    }


    int test, x;

    cin>>test;

    for (i=0;i<test;i++)
    {
        cin>>x;
        cout<<"Fib("<<x<<") = "<<n[x]<<endl;
    }



    return 0;
}
