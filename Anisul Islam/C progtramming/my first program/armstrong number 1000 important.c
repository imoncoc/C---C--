#include<stdio.h>
int main()
{
    int initialnum,finalnum,temp,r,i,sum=0;

    printf("Initial value : ");
    scanf("%d",&initialnum);

    printf("Final value : ");
    scanf("%d",&finalnum);

    for (i=initialnum; i<=finalnum; i++)
    {
        temp=i;

        while (temp!=0)
        {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }
        if (sum==i)
        {
            printf("Armstrong number is : %d\n",i);

        }
        sum=0;
    }




    return 0;
}
