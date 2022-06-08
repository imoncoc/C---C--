#include<iostream>
using namespace std;
int Partition (int *A,int start, int end)
{
    int pivot = A[end];
    int partitionIndex = start; //set partition as initially
    for (int i=start; i<end; i++)
    {
        if (A[i]<=pivot)
        {
            swap (A[i],A[partitionIndex]);//swap if elements lesser than pivot
            partitionIndex++;
        }
    }
    swap (A[partitionIndex],A[end]);//swap pivot with element at partition index
    return partitionIndex;
}

void QuickSort (int *A, int start , int end)
{
    if (start < end)
    {
        int partitionIndex = Partition (A,start, end);//calling partitision
        QuickSort (A,start,partitionIndex-1);
        QuickSort (A,partitionIndex+1,end);
    }



}

int main()
{

   int A[]={7,6,5,4,3,2,1,0};
   QuickSort (A,0,7);
   for (int i=0;i<8;i++)
   {
       cout <<A[i]<<" ";
   }


    return 0;
}
