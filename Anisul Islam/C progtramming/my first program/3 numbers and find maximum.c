#include<stdio.h>
int main ()
{
    int num1,num2,num3;
    printf("Enter 1st word :");
    scanf("%d",&num1);
    printf("Enter 2nd word : ");
    scanf("%d",&num2);
    printf("Enter 3rd word :");
    scanf("%d",&num3);

    if (num1>num2 && num1>num3)
        printf("First number is larger than other.");
    else if (num2>num1 && num2>num3)
        printf("Second number is larger than other.");
    else if (num3>num1 && num3>num2)
        printf("Third number is larger than others.");
    else
        printf("Is equal to three numbers.");


    return 0;
}
