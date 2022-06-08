#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float result;

    printf("Enter 1st integer : ");
    scanf("%d",&a);
    printf("Enter 2nd integer : ");
    scanf("%d",&b);
    printf("Enter 3rd integer : ");
    scanf("%d",&c);

    sum = a+b+c;
    result= (float)(a+b+c)/3;

    printf("Sum = %d\n",sum);
    printf("Div = %f\n",result);


    getch();
}
