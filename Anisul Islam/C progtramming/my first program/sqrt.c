#include<stdio.h>
int main()
{
    int x;
    printf ("Enter any integer : ");
    scanf ("%d",&x);

    double result = sqrt(x);
    printf("Answer is = %.2lf",result);
}
