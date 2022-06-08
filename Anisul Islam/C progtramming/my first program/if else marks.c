#include<stdio.h>
int main()
{
    float marks;
    printf("Enter your marks : ");
    scanf("%f",&marks);

    if (marks>=80)
        printf("You get : A+");
    else if (marks>=70)
        printf("You get : A");
    else if (marks>=60)
        printf("You get : A-");
    else if (marks>=50)
        printf("You get : B");
    else if (marks>=40)
        printf("You get : C");
    else if (marks>=33)
        printf("you get : D");

    else
        printf("You are Fail");
    }
