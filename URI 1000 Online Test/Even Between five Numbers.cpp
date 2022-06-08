#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,count=0,odd=0,positive=0,negative=0;
    cin>>a>>b>>c>>d>>e;

    if(a%2==0)
    {
        count++;
    }
    if(b%2==0)
    {
        count++;
    }
    if(c%2==0)
    {
        count++;
    }
    if(d%2==0)
    {
        count++;
    }
    if(e%2==0)
    {
        count++;
    }
    cout<<count<<" valor(es) par(es)"<<endl;

    if(a%2==1)
    {
        odd++;
    }
    if(b%2==1)
    {
        odd++;
    }
    if(c%2==1)
    {
        odd++;
    }
    if(d%2==1)
    {
        odd++;
    }
    if(e%2==1)
    {
        odd++;
    }
    cout<<odd<<" valor(es) impar(es)"<<endl;


    return 0;
}
