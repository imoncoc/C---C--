#include<stdio.h>
union test
{
    int x,y;
    char name[20];
};


int main()
{
    union test t1;
    t1.x=100;
    t1.y=10;
    strcpy(t1.name,"Imon");

    printf("X = %d\n",t1.x);
    printf("Y = %d\n",t1.y);

    t1.y=50;

    printf("X = %d\n",t1.x);
    printf("Y = %d",t1.y);


    getch();
}
