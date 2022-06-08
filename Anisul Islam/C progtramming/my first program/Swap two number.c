#include<stdio.h>
int main()
{
    int num1=10, num2 =20;

    num1 = num1-num2; //-10
    num2 = num1+num2; //10
    num1 = num2 - num1; //0

    printf("number 1 : %d\n",num1);
    printf("number 2 : %d\n",num2);
    return 0;
}
