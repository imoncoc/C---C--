#include<stdio.h>
int main()
{
    double base,exp,result=1,i;

    printf("Enter Base : ");
    scanf("%lf",&base);

    printf("Enter exp : ");
    scanf("%lf",&exp);

    for (i=1;i<=exp;i++)
    {
        result=result*base;
    }
    printf("Result = %.2lf",result);
}

