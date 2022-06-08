#include<stdio.h>
int main()
{
    int n,sum=0,i=5;
    printf("Enter the last number of the series : ");
    scanf("%d",&n);
    printf("5+10+15......+%d =",n);

    while (i<=n)
    {
        sum=sum+i;
        i=i+5;

    }

    printf("%d",sum);

    return 0;
}
