#include<stdio.h>
int main()
{
    int num,temp,r,sum=0;
    printf("\t Enter any integer number : ");
    scanf("%d",&num);

    temp=num;
    while (temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    printf("\t Reserve number is = %d\n",sum);

    if (num==sum)
        printf("\t It's a Palimdrome number.\n");
    else
        printf("\t It's not a Palimndrome number.\n");



    return 0;
}
