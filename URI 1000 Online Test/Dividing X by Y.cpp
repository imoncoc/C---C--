#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n,i,x,y,sum=0;
    cin>>n;

    for (i=0;i<n;i++)
    {
        cin>>x>>y;
        if (y==0)
        {
            cout<<"divisao impossivel"<<endl;
        }
        else {
            sum = x/y;
        cout<<fixed<<setprecision(1)<<sum<<endl;
        }

    }



    return 0;
}
