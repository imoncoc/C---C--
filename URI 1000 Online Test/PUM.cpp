#include<iostream>
using namespace std;
int main()
{
    int n,i,j;

    cin>>n;

    for(i=1,j=1;i<=n;i++,j+=4)
    {
       cout<<j<<" "<<j+1<<" "<<j+2<<" PUM"<<endl;
    }




    return 0;
}
