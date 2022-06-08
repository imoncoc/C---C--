#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int sum=a/b;


    //sum=(float(a))/b;
    printf("%d %d %d",sum,(a-sum*b),b);

}
