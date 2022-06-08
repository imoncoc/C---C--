#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter any upper case letter : ");
    scanf("%c",&upper);


    //upper = toupper(lower); //use it to upper case
    lower = tolower(upper);
    printf("Lower case letter is : %c",lower);
}
