#include<stdio.h>
int main()
{
    float i,n,sum=0;
    printf("Enter last integer : ");
    scanf("%f",&n);

    printf("1 + 1/2 + 1/3 +.....1/%.0f = ",n);

    for (i=1; i<=n; i++)
    {
        sum=sum+(1/i);
    }
        printf(" %.2f",sum);




    return 0;
}
