#include<stdio.h>
int main()
{
    int XI,YI,T,n,j;

    scanf("%d",&n);

    for(j=1; j<=n; j++)
    {
        scanf("%d %d",&XI,&YI);
        T=XI+YI;
        T=T/2;

        if (T%2==0)
        {
            printf("Sadia will be happy.\n");
        }
        else
        {
            printf("Oops!\n");
        }

    }




}
