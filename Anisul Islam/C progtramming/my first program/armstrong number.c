#include<stdio.h>
int main()
{
    int num,r,temp,sum=0;
    printf("Enter any integer number : ");
    scanf("%d",&num);

    temp=num;
    while (temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if (num==sum)
        printf("It's a Armstrong number.");
    else
        printf("It's not a Armstrong number.");





    return 0;
}
