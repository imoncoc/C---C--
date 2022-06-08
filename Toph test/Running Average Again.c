#include<stdio.h>
int main()
{
    int x, i,n;
    float sum=0,avg;

    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf("%d", &x);
        sum = sum + x;
        avg = sum / (i + 1);
        printf("%f\n",avg);
    }

    return (0);
}
