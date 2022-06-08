#include<stdio.h>
int main()
{
    int a[50],n,i;
    scanf("%d",&n);

    a[1]=1;
    a[2]=1;

    for (i=3;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    printf("%d",a[n]);



   /* for (i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }*/

}
