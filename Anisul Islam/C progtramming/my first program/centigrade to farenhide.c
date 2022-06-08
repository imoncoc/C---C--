#include<stdio.h>
int main()
{
    float fahrenheit,centigrade;
    printf("Enter centigrade : ");
    scanf("%f",&centigrade);

    fahrenheit = (centigrade*1.8)+32;
    printf("Answer is = %.2f",fahrenheit);
    return 0;
}
