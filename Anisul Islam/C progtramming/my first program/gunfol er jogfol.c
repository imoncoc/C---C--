#include<stdio.h>
int main ()
{
    int i,n,result=1;
    printf("Enter last integer : ");
    scanf("%d",&n);

    printf("1*2*3*4........*%d = ",n);

    for (i=1; i<=n; i++)
    {
        result=result*i;

    }
    printf("%d",result);



    return 0;
}
