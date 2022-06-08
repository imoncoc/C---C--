#include<iostream>
using namespace std;
int main()
{
    int a,n,sum=0,i,b;

    cin>>a;
    cin>>n;

    if (n<=0)
        while (1)
        {
            if (n<=0)
            {
                cin>>n;
            }
            else
            {
                break;
            }
        }

      for (i=a; i<(a+n); i++)
    {
        sum+=i;
    }



    cout<<sum<<endl;

    return 0;
}
