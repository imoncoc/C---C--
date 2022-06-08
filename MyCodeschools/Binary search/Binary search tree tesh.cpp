#include<iostream>
using namespace std;

binarySearch(int a[], int len, int x)
{
    int low=0, high = len-1;

    while (low<=high)
    {
        int mid = (low+high)/2;

        if (x==a[mid])
        {
            return mid;
        }
        else if (x<a[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid +1;
        }

    }

    return -1;
}

int main()
{
    int n;
    cout<<"Enter how many number you want to input."<<endl;
    cin>>n;

    int a[n],i;

    cout<<"Number are : "<<endl;

    for ( i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for ( i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    int len = sizeof a/sizeof a[0];

    cout<<endl<<"Len : "<<len<<endl;

    cout<<"Enter the number you want to find : "<<endl;
    int x;
    cin>>x;

    int index = binarySearch(a,len,x);

    if (index!=-1)
    {
        cout<<"X is found. In Position : "<<index+1<<endl;
    }
    else
    {
        cout<<"X is not found."<<endl;
    }




    return 0;
}
