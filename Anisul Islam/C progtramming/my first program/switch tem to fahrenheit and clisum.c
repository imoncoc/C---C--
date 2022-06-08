#include<stdio.h>
int main()
{
    int choice;
    float c,f;
    printf("Temperecher conversions menu.\n");
    printf("1. Celsius to Fahrenheit.\n");

    printf("2. Fahrenheit to Celsius.\n");


    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {


    case 1:
    {
        printf("Enter the Fahrenheit Temperature :");
        scanf("%f",&c);
        c = (f-32)*1.8;
        printf("The temperature in celsius is : %f",c);
        break;
    }
    case 2:
        {
            printf("Enter the celsius Temperature :");
        scanf("%f",&f);
        f = (1.8*c)+32;
        printf("The temperature in Fahrenheit is : %f",f);
        break;

    }
    default:
        printf("Not a correct input.");
    }

}
