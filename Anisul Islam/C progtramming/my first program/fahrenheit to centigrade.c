#include<stdio.h>
int main()
{
    float c,f;
    printf ("Enter fahrenheit : ");
    scanf("%f",&f);

    c = (f-32)/1.8;
    printf("centigrade is = %.2f",c);
    return 0;
}
