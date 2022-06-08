#include<stdio.h>
int main()
{
    int choice;
    float a,b,sum;
    printf("Calculetor equations.\n");
    printf("1. Addition. \n");
    printf("2. Subtraction. \n");
    printf("3. Share. \n");
    printf("4. Multiplication. \n\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
    {
        printf("Give two number for Additions.\n");
        printf("Enter first integer : ");
        scanf("%f",&a);
        printf("Enter second integer : ");
        scanf("%f",&b);
        sum=a+b;
        printf("Sum : %.2f+%.2f = %.2f",a,b,sum);
        break;
    }
    case 2:
    {
        printf("Give two number for Subtractions.\n");
        printf("Enter first integer : ");
        scanf("%f",&a);
        printf("Enter second integer : ");
        scanf("%f",&b);
        sum=a-b;
        printf("Sum : %.2f-%.2f = %.2f",a,b,sum);
        break;
    }
    case 3:
    {
        printf("Give two number for Share.\n");
        printf("Enter first integer : ");
        scanf("%f",&a);
        printf("Enter second integer : ");
        scanf("%f",&b);
        sum=a/b;
        printf("Sum : %.2f/%.2f = %.2f",a,b,sum);
        break;
    }
    case 4:
    {
        printf("Give two number for Multiplications.\n");
        printf("Enter first integer : ");
        scanf("%f",&a);
        printf("Enter second integer : ");
        scanf("%f",&b);
        sum=a*b;
        printf("Sum : %.2f*%.2f = %.2f",a,b,sum);
        break;
    }
    default:
     {
         printf("Wrong Input.");
     }


    }

}
