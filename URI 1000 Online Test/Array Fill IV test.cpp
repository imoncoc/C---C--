#include<iostream>
using namespace std;
int i;

int par(int a, int size)

{
    for (i=0;i<5;i++)
    {
        cout<<a[i];
    }
}



int main()
{
    int n,a[16],par=0,impar=0;

    for(i=0;i<15;i++)
    {
        cin>>a[i];

        if (a[i]%2==0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }

    if (par==5)
    {
        par(par,5);
    }


    return 0;
}

