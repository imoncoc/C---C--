#include<stdio.h>
int main()
{
    int inNum,fiNum,i,n,count;

    printf("Enter Initial number : ");
    scanf("%d",&inNum);

    printf("Enter Final number : ");
    scanf("%d",&fiNum);

    for (i=inNum; i< fiNum; i++)
    {
        count=0;
        for (n=2; n<i; n++)
        {
            if (i%n==0)
            {
                count++;
                break;
            }
        }
        if (count==0)
        {
            printf("%d\t",i);
        }
    }


    return 0;
}
