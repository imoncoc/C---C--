#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);

    if (num1>num2)
        printf ("First number is large : %d\n",num1);

    else if (num1<num2)
        printf("Second number is large : %d\n",num2);
    else
        printf("Both numbers are equal");
}
