#include<stdio.h>
int main()
{
    int x=5;
    int *pointer;
    pointer=&x;

    //Also can write like---
    //int x=5, *pointer=&x;

    printf("%d\n",x);
    printf("%d\n",&x); //print x address
    printf("%d\n",pointer);//pointer or x address
    printf("%d\n",*pointer); //find x value
    printf("%d\n",&pointer);// pointer address
    printf("%x\n",&x); //hexadecimal number

    getch();
}
