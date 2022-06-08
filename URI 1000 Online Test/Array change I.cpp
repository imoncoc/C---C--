#include<iostream>
using namespace std;
int main()
{
    int n1[20],n2[20],i;

    for (i=0;i<20;i++)
    {
        cin>>n1[i];


    }

    for (i=19;i>=0;i--)
    {
n2[i]=n1[i];

    }

    for (i=19;i>=0;i--)
    {
        cout<<"N["<<abs(i-19)<<"] = "<<n2[i]<<endl;
    }




    return 0;
}
