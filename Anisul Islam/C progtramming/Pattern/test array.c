#include<stdio.h>
int main()
{
    int arr[5],i;
    arr[2]=20;
   // printf("Enter arr 2 = ");
   // scanf("%d",&arr[2]);
   // printf("%d",arr[2]);

    for (i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<=4; i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}
