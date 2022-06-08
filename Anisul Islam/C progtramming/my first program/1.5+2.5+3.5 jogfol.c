#include<stdio.h>
int main()
{
    float i,n,sum=0;
    printf("Enter last number : ");
    scanf("%f",&n);

    for (i=1.5; i<=n; i++)

    {
        printf("%.2f ",i);
        sum=sum+i;
    }
    printf("\nAmount = %.2f\n",sum);

    return 0;
}
