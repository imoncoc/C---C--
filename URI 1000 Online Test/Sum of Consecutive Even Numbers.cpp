#include<iostream>
using namespace std;
int main()
{
    int n,i;

    while (true)
    {
   int sum=0;


    cin>>n;
    if (n==0)
    {
        break;
    }
    else
    {
         if (abs(n)%2==1)
    {
        n+=1;
    }

    for (i=n;i<(n+10);i+=2)
    {
        sum+=i;
    }
    cout<<sum<<endl;
    }

    }


    return 0;
}
