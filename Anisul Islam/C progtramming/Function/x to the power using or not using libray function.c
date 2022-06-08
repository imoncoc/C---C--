#include<stdio.h>
int main()
{
    double base,exp,result;

    printf("Enter Base : ");
    scanf("%lf",&base);

    printf("Enter exp : ");
    scanf("%lf",&exp);

    result=pow(base,exp);
    printf("Result = %.2lf",result);
}
