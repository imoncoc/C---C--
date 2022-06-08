#include<iostream>
using namespace std;
int main()
{
    int n,i;

    while (true)
    {
        cin>>n;
        if (n == 0) break;

        for (i=1;i<=n;i++)
        {
            if (i>1)
            {
                cout<<" ";
            }
            cout<<i;
        }
        cout<<endl;
    }





    return 0;
}
