#include<stdio.h>
int main()
{
    float base,height,area;
    printf("Base : ");
    scanf("%f",&base);

    printf("height :");
    scanf("%f",&height);

    area = .5 * base*height;
    printf("Area is = %.2f\n",area);

    return 0;
}
