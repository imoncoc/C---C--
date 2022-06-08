#include<iostream>
using namespace std;
int minMax(int arr[],int len,int *min, int *max)
{
    int i;

    *min=*max=arr[0];
    for(i=1;i<len;i++)
    {
        if (arr[i]< *min)
        {
           *min = arr[i];
        }
        if (arr[i]>*max)
        {
            *max = arr[i];
        }
    }
}


int main()
{
    int a[]={10,20,30,40,50,60,70,80,90,55,105,7,64,8,99,52,63,25};
    int min,max;

    int len =  sizeof(a)/sizeof a[0];

    minMax(a,len,&min,&max);
    cout<<"MInimum Value is : "<<min<<endl;
    cout<<"Maximu Value is : "<<max<<endl;




    return 0;
}
