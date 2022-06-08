#include<stdio.h>
int main()
{
    int num1, num2,num3;
    printf("Enter first number : ");
    scanf("%d",&num1);

    printf("Enter second number : ");
    scanf("%d",&num2);
    printf("Enter third number : ");
    scanf("%d",&num3);

   /* if (num1>num2 && num1>num3)
    {
        printf("First number is larger than other.");
    }
    else if (num2>num1 && num2>num3)
    {
        printf("second number is larger than other.");
    }
    else if (num3>num1 && num3>num2)
    {
        printf("Third number is larger than other.");
    }*/
     if (num1==num2 && num1!=num3)
    {
        printf("First number and Second are equals.");
    }
    else if (num2==num3 && num2!=num1)
    {
        printf("Second number and Third number are equals.");
    }
    else if (num3==num1 && num3!=num2)
    {
        printf("Third number and First are equals.");
    }
    else
    {
        printf("Both 3 numbers are equals.");
    }




    getch();
}

