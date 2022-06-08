#include<stdio.h>
int main()
{
    char str1[50]="My Name is ";
    char str2[]="Md Imon Hossain";
    int i=0,len=0,j=0;

    while (str1[i]!='\0')
    {
        i++;
        len++;
    }

    while (str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }
    printf("Str1 = %s",str1);


    return 0;
}
