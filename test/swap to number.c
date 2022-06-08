#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter A = ");
    scanf("%d",&a);

    printf("Enter B = ");
    scanf("%d",&b);

    //before swaping
    printf("Before Swapping number.\n");
    printf("A= %d , B= %d ",a,b);

    /* You can work like this
    temp=a;
    a=b;
    b=temp; */

    a=a-b;
    b=b+a;
    a=b-a;

    printf("\nAfter Swapping number.\n");
    printf("A= %d , B= %d ",a,b);

    getch();
}
