#include<iostream>
using namespace std;
int main()
{
    int x,sum=0,y,temp;

    cin>>x>>y;

     if (x>y)
    {
        temp=x;
        x=y;
        y= temp;
    }


    for (x;x<=y;x++)
    {
        if (x%13!=0)
        {
           sum=sum+x;
        }

    }
    cout<<sum<<endl;



    return 0;
}
