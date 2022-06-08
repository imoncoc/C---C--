#include<stdio.h>
int main()
{
    int n1,n2,n3,sum=0,a=1,b=2,c=3;

    printf("Enter first number : ");
    scanf("%d",&n1);

    printf("Enter second number : ");
    scanf("%d",&n2);

    printf("Enter first number : ");
    scanf("%d",&n3);

    printf("1.2.3+2.3.4+3.4.5.......+%d.%d.%d = ",n1,n2,n3);

    while(a<=n1 && b<=n2 && c<=n3)
    {
        sum=sum+a*b*c;
        a=a+1;
        b=b+1;
        c=c+1;
    }
    printf("%d",sum);


    return 0;
}
