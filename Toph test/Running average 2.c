#include<stdio.h>
int main()
{
    int num[100],i,n;
    float avg,sum=0;
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    for (i=1;i<=n;i++)
    {
        sum=sum+num[i-1];
        avg=sum/i;
       printf("%f\n",(float)avg);
    }


}
