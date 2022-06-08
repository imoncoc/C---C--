#include<stdio.h>
int main()
{
    char str[50];
    int i,capital,small,digit;
    i=capital=small=digit=0;

    printf("Enter String : ");
    gets(str);

    while (str[i]!='\0')
    {
        if (str[i]>=65 && str[i]<=90)
            capital++;
            else if (str[i]>=97 && str[i]<=122)
            small++;
        else if (str[i]>=48 && str[i]<=57)
            digit++;

            i++;
    }

    printf("Number of Capitals letter = %d\n",capital);
    printf("Number of Small = %d\n",small);
    printf("Number of Digit letter = %d\n",digit);




    getch ();
}
