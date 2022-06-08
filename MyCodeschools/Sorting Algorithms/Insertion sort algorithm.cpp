#include<iostream>
using namespace std;
int main()
{
    int A[]= {2,7,4,1,5,3};
    int i,value,j;

    for (i=1; i<6; i++)
    {
        value = A[i];
        j = i-1;
        while (j>=0 && A[j] > value)
        {
            A[j+1]=A[j];
            j = j-1;
        }
            A[j+1]=value;

    }

    for (i=0;i<6;i++)
    {
        cout<<A[i]<<" ";
    }


    return 0;
}
