#include<stdio.h>
int main()
{
    int i,n,even=0,odd=0;

    printf("Enter last term : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        if (i%2==0)
         even=even+i;
        else
            odd=odd+i;
    }
    printf("Sum = %d",odd-even);


    return 0;
}
