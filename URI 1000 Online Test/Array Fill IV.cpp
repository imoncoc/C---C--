#include<iostream>
using namespace std;
int main()
{
    int a[20],i,par=0,impar=0;

    for (i=0;i<8;i++)
    {
        cin>>a[i];
    }

    for (i=0;i<8;i++)
    {
        if (a[i]%2==0)
        {
            par++;
        }

        else if (a[i]%2==1)
        {
            impar++;
        }
    }

    for (i=0;i<8;i++)
    {
        if (par>impar)
        {
            for (i=0;i<5;i++)
            {
                cout<<"par["<<i<<"] = "<<a[i]<<endl;
            }

        }

        else if (par<impar)
        {
             for (i=0;i<5;i++)
            {
                cout<<"impar["<<i<<"] = "<<a[i]<<endl;
            }
        }
    }


    return 0;
}
