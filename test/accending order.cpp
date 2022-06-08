#include<iostream>
using namespace std;
int main()
{
    int a[]={10,5,3,9,8};
    int i,j,temp;

    for (i=0;i<5;i++)
    {
        for (j=i+1;j<5;j++)
        {
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]= a[j];
                a[j]= temp;
            }
        }
    }

    for (i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl<<"Enter N : ";


    int n,count=0,position=-1;
    cin>>n;

    for(i=0;i<5;i++)
    {

        if (n==a[i])
        {
            break;
        }


    }
     if (i<5)
     {
        cout<<"Position is : "<<i+1<<endl;
        cout<<"Value is  : "<<a[i]<<endl;
     }

    else
    {
        cout<<"Not found."<<endl;
    }
    return 0;
}
