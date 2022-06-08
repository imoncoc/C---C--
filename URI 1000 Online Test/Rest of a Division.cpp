#include<iostream>
using namespace std;
int main()
{
    int x,y,temp;

    cin>>x>>y;

    if (x>y)
    {
        temp=x;
        x=y;
        y= temp;
    }

    for (++x;x<y;x++)
    {
        int sum ;
        if (x%5==2)
        {
            cout<<x<<endl;
        }
        if (x%5==3)
        {
            cout<<x<<endl;
        }
    }



    return 0;
}
