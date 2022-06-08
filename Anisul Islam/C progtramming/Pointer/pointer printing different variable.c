#include<stdio.h>
int main()
{
    int x=10,y=20,z=30;

    int *pointer;

    pointer=&x;
    printf("X = %d\n",*pointer); //x value
    printf("X = %d\n",pointer);  // x address

    pointer=&y;
    printf("Y = %d\n",*pointer); //y value
    printf("Y = %d\n",pointer);  // y address

    pointer=&z;
    printf("Z = %d\n",*pointer); //x value
    printf("Z = %d\n",pointer);  // x address



    getch();
}
