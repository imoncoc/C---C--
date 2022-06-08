#include<iostream>
using namespace std;
int main()
{
    int a,b,i;



    while(true)
    {
        int sum=0;
        cin>>a;
        cin>>b;

        if (a<=0 || b<=0)
        {
            break;
        }
        else if (a>b)
        {
            for (i=b;i<=a;i++)
            {
                sum=sum+i;
                cout<<i<<" ";

            }
            cout<<"Sum="<<sum<<endl;
        }
        else if (a<b)
        {
            for (i=a;i<=b;i++)
            {
                sum=sum+i;
                cout<<i<<" ";
            }
            cout<<"Sum="<<sum<<endl;
        }

    }


    return 0;
}
