#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your marks :");
    scanf("%d",&mark);

    if (mark>=33 && mark<=100)
        printf("You are pass.");
    else
        printf("You are fail.");
}
