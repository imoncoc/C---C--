#include<stdio.h>
int main()
{
    float a,b,c,d,x1,x2;
    printf("Enter a, b, c : ");
    scanf("%f %f %f",&a,&b,&c);

    d = sqrt(b*b)-(4*a*c);
    //printf("%f",d);
    x1=(-b+d)/2*a;
    x2=(-b-d)/2*a;

    printf("X1 = %.2f\n",x1);
    printf("X2 = %.2f",x2);


}
