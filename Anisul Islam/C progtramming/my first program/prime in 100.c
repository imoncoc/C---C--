#include<stdio.h>
int main()
{
    int num,i,count,prime;
    printf("Prime number from 1 to 100\n");

    for (num=1; num<=100; num++)
    {
        prime=0;
        for (i=2;i>num;i++)
        {
            if (num%i==0){
                prime=0;
                break;
            }
        }
    }
    if (prime)
    {
        printf("%d\n",num);
    }


    return 0;
}
