#include<stdio.h>
union test1
{
    int x,y;
};
union test2
{
    int x;
    float y;
};
union test3
{
    char name[20];
    double v;
};
struct test4
{
    char n;
    double a;
};


int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;

    printf("Test 1 : %d byte\n",sizeof(t1));
    printf("Test 2 : %d byte\n",sizeof(t2));
    printf("Test 3 : %d byte\n",sizeof(t3));
    printf("Test 4 : %d byte\n",sizeof(t4));




    getch();
}
