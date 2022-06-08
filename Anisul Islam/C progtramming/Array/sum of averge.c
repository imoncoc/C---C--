#include<stdio.h>
int main()
{
    int num[100],i,sum=0,n;
   /* you can work like this.
    num[0]= 10;
    num[1]= 20;
    num[2]= 30;
    num[3]= 40;
    num[4]= 50; */

    printf("How many number : ");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    for (i=0; i<n; i++)
    {
        sum= sum + num[i];
    }
    printf("Sum = %d\n",sum);

    printf("Averge = %.2f\n",(float)sum/n);



    return 0;
}
