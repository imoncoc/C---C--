#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any charcter : ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch=='i' || ch=='o' || ch == 'u') {
        printf("The Word you entered is vowel.");
    }
    else {
        printf("The word you entered is consonant.");
    }


    return 0;
}
