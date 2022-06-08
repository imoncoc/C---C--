#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf ("Enter second number : ");
    scanf("%d",&num2);


    if (num1>num2)
        printf("The large is first number = %d",num1);
    else if (num1<num2)
        printf ("The large is second number = %d",num2);
    else
        printf("Both number are equals.");

    return 0;


}
