#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[]={5,16,7,89,45,32,23,10};
    int *p=&a[1], *q=&a[5];

    cout<<*(p+3)<<" ";
    cout<<*(q-3)<<" ";
    cout<<q-p<<" ";
    printf("%d ",p<q);
    printf("%d ",*p<*q);




    return 0;
}
