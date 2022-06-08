#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter any integer : ");
    scanf("%d",&n);

     while (n!=0)
     {
         n=n/10;
         ++count;     }


         printf("Tottal number of digit  = %d",count);

         return 0;

}

