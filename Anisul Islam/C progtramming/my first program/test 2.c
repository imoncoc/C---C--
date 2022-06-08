#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter a uppercase word: ");
    scanf("%c",&upper);
    lower = tolower(upper);

    printf("Convert to uppercase word : %c",lower);
    getch ();
}
