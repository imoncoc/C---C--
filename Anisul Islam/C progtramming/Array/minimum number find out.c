#include<stdio.h>
int main()
{
    int num[100],n,i,sum=0;
    printf("How many number : ");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    for (i=0;i<n; i++)
    {
        sum=sum+num[i];
    }
    printf("Sum = %d\n",sum);

    int min=num[0];
    for (i=1; i<n;i++)
    {
        if (min>num[i])
            min=num[i];
    }
    printf("Minimum = %d",min);




    return 0;
}
