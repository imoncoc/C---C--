#include<iostream>
using namespace std;
int main()
{
    int x,j,n,i;
    cin>>x;

    for (j=0; j<x; j++)
    {
        int count=0;
        cin>>n;

        for(i=2; i<n; i++)
        {
            if (n%i==0)
            {
                count++;
            }
        }

        if (count==0)
        {
            cout<<n<<" eh primo"<<endl;
        }
        else
        {
            cout<<n<<" nao eh primo"<<endl;
        }
    }


    return 0;
}
