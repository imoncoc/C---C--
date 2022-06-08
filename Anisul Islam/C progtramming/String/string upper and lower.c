#include<stdio.h>
int main()
{
    char str1[]="Dhaka is crowed city.";
    char str2[]="Australia is a beautiful country.";

    strupr(str1);
    printf("Str1 = %s\n",str1);

    strlwr(str2);
    printf("\nStr2 = %s\n",str2);

    getch ();
}
