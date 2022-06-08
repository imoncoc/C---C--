#include<iostream>
using namespace std;
int main()
{
    int a[1000],i,n,position=-1;

    cin>>n;

    for (i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int min = a[0];

    for (i=0;i<n;i++)
    {
        if (min>a[i])
        {
            min=a[i];
            position = i;

        }

    }
    cout<<"Menor valor: "<<min<<endl;
    cout<<"Posicao: "<<abs(position)<<endl;


    return 0;
}
