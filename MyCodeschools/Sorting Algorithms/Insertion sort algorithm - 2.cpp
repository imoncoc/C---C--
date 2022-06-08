#include<iostream>
using namespace std;
int main()
{
    int A[]= {2,7,4,1,5,3};
    int i,value,hole;

    for (i=1; i<6; i++)
    {
        value = A[i];
        hole = i-1;
        while (hole>=0 && A[hole] > value)
        {
            A[hole+1]=A[hole];
            hole = hole-1;
        }
            A[hole+1]=value;

    }

    for (i=0;i<6;i++)
    {
        cout<<A[i]<<" ";
    }


    return 0;
}

