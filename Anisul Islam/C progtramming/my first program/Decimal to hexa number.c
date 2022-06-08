#include<stdio.h>
int main()
{
    int number1,number2;
    printf ("Enter a decimal number :");
    scanf("%d",&number1);

    printf("Hexa-decimal number : %x\n",number1);

    printf ("Enter a Hexa-decimal number :");
    scanf("%x",&number2);

    printf("Decimal number : %d \n",number2);

    return 0;
}
