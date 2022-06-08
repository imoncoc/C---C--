#include<stdio.h>
int main()
{
    int i,n,sum=1;
    printf("Enter last integer : ");
    scanf("%d",&n);

    printf("1^2*2^2*3^2.........*%d = ",n);

    for (i=1; i<=n; i++)

    {
        sum=sum*i*i;
    }
    printf("%d",sum);


    return 0;
}
