#include<stdio.h>
int main()
{
    int inNum,fiNum,r,i,temp,sum=0;
     printf("Enter Initial number : ");
    scanf("%d",&inNum);
    printf("Enter Final number : ");
    scanf("%d",&fiNum);



    for (i=inNum; i<=fiNum; i++)
        {
            temp=i;

    while (temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    }
    if (sum==i)
        {
            printf("%d",i);
            }

    sum=0;

    return 0;
}
