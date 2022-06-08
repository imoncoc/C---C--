#include<stdio.h>
int main()
{
    int choice;
    float c,f;

    printf("Tempeture manu base.\n");
    printf("1. Celsius to Fahrenheit.\n");
    printf("2. Fahrenheit to celsius.\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1 :
        {
            printf("Enter Celsius temperature : ");
            scanf("%f",&c);
            f=(1.8*c)+32;
            printf("Tempure in Fahrenheit is : %.2f",f);
            break;
        }
    case 2 :
        {
            printf("Enter Fahrenheit temperature : ");
            scanf("%f",&f);
            c=(f-32)/1.8;
            printf("Tempure in Celsius is : %.2f",c);
            break;
        }
        default:
        printf("Not a correct input");
    }
}
