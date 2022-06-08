#include<stdio.h>
int main ()
{
    float area, radius;
    printf("Enter radius : ");
    scanf("%f",&radius);

    area = 3.1416*radius*radius;
    printf("Answer = %f\n",area);
    return 0;
}
