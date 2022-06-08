#include<stdio.h>
int main()
{
    int number[100],i,n;

    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }
    int max=number[0];

    for (i=1;i<n;i++)
    {
        if (max<number[i])
            max=number[i];
    }
    printf("%d",max);
}
