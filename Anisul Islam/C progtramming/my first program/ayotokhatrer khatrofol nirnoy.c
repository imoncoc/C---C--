#include<stdio.h>
int main()
{
    float length,width,area;
    printf("Enter length = ");
    scanf("%f",&length);
    printf("Enter width = ");
    scanf("%f",&width);

    area = length*width;
    printf("Area is = %.2f\n",area);
    return 0;
}
