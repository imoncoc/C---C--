#include<stdio.h>
int main()
{
    char str1[]="Md Imon Hossain";
    char str2[]="Md Imon Hossain";

    int d= strcmp(str1,str2);

    if (d==0)
    {
        printf("String are equals.");
    }
    else
        printf("String aren't equals.");
}
