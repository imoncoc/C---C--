#include<iostream>
using namespace std;
int main()
{
    int a[4],i,temp,j,n[4];



    for (i=0; i<3; i++)
    {
        cin>>a[i];
    }
    for (i=0; i<3; i++)
    {
        n[i]=a[i];
    }




    for (i=0; i<3; i++)
    {
        for (j=i+1; j<3; j++)
        {
            if (a[i]>a[j])
            {
                temp= a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }

    for (i=0;i<3;i++)
    {
        cout<<a[i]<<endl;
    }
    cout <<endl;

    for (i=0;i<3;i++)
    {
        cout<<n[i]<<endl;
    }





    return 0;
}
