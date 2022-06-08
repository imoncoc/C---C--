#include<stdio.h>
int main()
{
    int num,temp,r,sum=0,fact,i;
    printf("Enter any integer number : ");
    scanf("%d",&num);

    temp=num;

    while (temp!=0)
    {
        r=temp%10;

        fact=1;
        for (i=1;i<=r;i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;
        temp=temp/10;
    }
    if (sum==num)
        printf("%d is a Strong number.\n ",num);
        else
           printf("%d is not a Strong number.\n",num);


    return 0;
}
