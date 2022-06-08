#include<stdio.h>
int main()
{
    int num;
    printf("Enter any integer : ");
    scanf("%d",&num);

    if (num>0)
        printf("The number is positive.");
    else if (num<0)
    printf("The number is negetive.");
    else
        printf("Zero");
    return 0;

}
