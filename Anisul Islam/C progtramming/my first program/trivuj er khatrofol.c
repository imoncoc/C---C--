#include<stdio.h>
int main()
{
    float base,height,area;
    printf("Enter base :");
    scanf("%f",&base);
    printf ("Enter height : ");
    scanf("%f",&height);

    area = .5*base*height;
    printf("The answer is = %.2f",area);

    return 0;
}
