#include<iostream>
using namespace std;
int main()
{
    int n,i,j;

    cin>>n;

    for (i=0,j=1;i<n;i++,j++)
    {
        cout<<j<<" "<<j*j<<" "<<j*j*j<<endl;
    }



    return 0;
}

