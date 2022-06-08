#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6};
    int *p = &a[3];
    int *q = &a[5];

    printf("%d\n",p<=q);
    printf("%d\n",p>=q);
    q= &a[3];
    printf("%d",p==q);


    return 0;



    return 0;
}
