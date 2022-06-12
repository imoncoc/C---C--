#include<iostream>
using namespace std;
int binarySearch(int a[],int n, int x)
{
    int low = 0, high = n-1;

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if (x == a[mid])
        {
            return mid;
        }

        else if (x < a[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }

    }
    return -1;



}


int main()
{

    int a[]={2,4,5,7,13,14,15,23};

    int x;

    cout<<"Enter a number to search : ";
    cin>>x;

    int index = binarySearch(a,8,x);

    if (index != -1)
    {
        cout<<"Number "<<x<<" is : "<<index<<endl;
    }
    else
    {
        cout<<"Number is not found.";
    }



    return 0;
}
