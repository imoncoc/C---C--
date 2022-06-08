#include<iostream>
using namespace std;
int main()
{
    int num[10000],n,i;
    cin>>n;

    for (i=0; i<n; i++)
    {
        cin>>num[i];
    }

    for (i=0; i<n; i++)
    {
        if (num[i]>=1)
        {
            if (num[i]%2==0)
            {
                cout<<"EVEN POSITIVE"<<endl;
            }
            else if (num[i]%2==1)
            {
                cout<<"ODD POSITIVE"<<endl;
            }
        }
        else if (num[i]==0)
        {
            cout<<"NULL"<<endl;
        }


        else
        {
            if (abs(num[i])%2==0)
            {
                cout<<"EVEN NEGATIVE"<<endl;
            }
            else if (abs(num[i])%2==1)
            {
                cout<<"ODD NEGATIVE"<<endl;
            }
        }


    }
    return 0;
}
