#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any charcter : ");
    scanf("%c",&ch);

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("Your entered charter is vowels.");
    }
    else if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("Your entered charter is vowels.");
    }
    else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
    {
        printf("Your entered word is consonat.");
    }
    else
    {
        printf("Invalid.");
    }

    getch();
}

