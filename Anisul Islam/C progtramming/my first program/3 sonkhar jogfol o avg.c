#include<stdio.h>
int main()
{
    int num1,num2,num3;
    float sum,avg;
    printf("Enter three integer numbers : ");
    scanf("%d %d %d,",&num1,&num2,&num3);
    sum = num1+num2+num3;
    printf("Sum = %.2f\n",sum);

    avg = (float)sum/3;
    printf("Avg =%.2f\n",avg);

    return 0;
}
