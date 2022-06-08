#include<iostream>
using namespace std;
int main()
{
    int x,z,i,sum=0,count=0;
    cin>>x;
    cin>>z;

    if (x>=z)
    {
        while(1)
        {
            if (x>=z)
            {
               cin>>z;
            }
            else
            {
                break;
            }

        }
    }

    for (i=x;i<z;i++)
    {
        sum+=i;
        count++;
        {
            if (sum>z)
            {
                break;
            }
        }
    }
    cout<<count<<endl;




    return 0;
}
