#include<stdio.h>
int main()
{
    int x,y,z,n;

    scanf("%d %d",&x,&y);

    n=y%x;
    //printf("%d\n",n);
    z=x-n;
    printf("%d",z);
}
