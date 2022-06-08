#include<stdio.h>
int main()
{
    int x=10;

    printf("%d\n",x++); //x=10
    printf("%d\n",x); //x=11
    printf("%d\n",++x); //x=12
    printf("%d\n",x); //x=12
    printf("%d\n",x--); //x=12
    printf("%d\n",--x); //x=10

    int y=20;
    int result = +y;
    printf("math is : %d",result);
    return 0;
}
