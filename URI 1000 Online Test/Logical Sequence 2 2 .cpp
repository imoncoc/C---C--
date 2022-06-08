#include<iostream>
using namespace std;
int main()
{
    int n,i,j,x;

    cin>>j>>n;

    for (i=1;i<=n;i++)
    {
        cout<<i;
        if (i%j==0)
        {
           cout<<" "<<endl;
        }


    }



    return 0;
}
