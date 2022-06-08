#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter 1st number :  ");
    scanf("%d",&num1);
    printf("Enter 2nd number :  ");
    scanf("%d",&num2);
    printf("Enter 3rd number :  ");
    scanf("%d",&num3);

    if (num1<num2 && num1<num3)
        printf("1st number is lower than other. ");
    else if (num2<num1 && num2<num3)
        printf("2nd number is lower than other. ");
    else    if (num3<num1 && num3<num1)
        printf("1st number is lower than other. ");
    else
        printf("All numbers are equals.");

    }
