#include<stdio.h>
int main()
{
    float num1,num2;
    char op;



    printf("Enter an operator (+,-,*,/) : ");
    scanf("%c",&op);

     printf("Enter two number : ");
    scanf("%f %f",&num1,&num2);

    switch (op)
    {
    case '+' :
    {
        printf("%.2f + %.2f =%.2f\n",num1,num2,num1+num2);
        break ;
     }
     case '-' :
    {
        printf("%.2f - %.2f =%.2f\n",num1,num2,num1-num2);
        break ;
     }
     case '*' :
    {
        printf("%.2f * %.2f =%.2f\n",num1,num2,num1*num2);
        break ;
     }
     case '/' :
    {
        printf("%.2f / %.2f =%.2f\n",num1,num2,num1/num2);
        break ;
     }
     default :
        printf("Invalid operator.");


    }
    return 0;

}
