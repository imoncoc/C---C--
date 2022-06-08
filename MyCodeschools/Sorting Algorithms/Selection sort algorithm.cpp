#include<iostream>
using namespace std;
void selectionSort(int A[],int n)
{
    for (int i=0;i<n-1;i++) //need running loop 5 time coz check below
    {
        int iMin=i; //to compae take iMin
        for (int j=i+1;j<n;j++) //need running loop 6 time to compare
        {
            if ( A[iMin] > A[j])
                iMin=j; // Accutual value store here like lowest value
        }
        int temp = A[i];
        A[i]=A[iMin];
        A[iMin]=temp;
    }
}



int main()
{
    int A[]={2,7,4,1,5,3};
    selectionSort (A,6);
    for (int i=0;i<6;i++)
    {
        cout<<A[i]<<" ";
    }


    return 0;
}
