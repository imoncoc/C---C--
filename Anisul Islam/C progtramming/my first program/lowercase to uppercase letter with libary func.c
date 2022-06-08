#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter a lowercase letter :");
    scanf("%c",&lower);
    upper = toupper(lower);



    printf("convert into uppercase letter : %c",upper);

    return 0;
}
