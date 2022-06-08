#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    cout<<"N[0] = "<<n<<endl;

    for ( i=1; i<10;i++)
    {
        cout<<"N["<<i<<"] = "<<n+n<<endl;
        n=n+n;
    }


    return 0;
}
