#include<iostream>
using namespace std;
int main()
{
    int n[10],i;

    cin>>n[0];

    cout<<"N[0] = "<<n[0]<<endl;

    for(i=1;i<11;i++)
    {
       cout<<"N["<<i<<"] = "<<n[i-1]*2<<endl;
        n[i]=n[i-1]*2;
    }


    return 0;
}
