#include<stdio.h>
int main()
{
    char str1[30]="mom";
    char str2[30];
    int i=0,len=0,j;

    while (str1[i]!='\0')
    {
        i++;
        len++;
    }
    for (j=0,i=len-1; i>=0;i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';

    printf("Str1 = %s\n",str1);
    printf("Str2 = %s\n",str2);

    int d= strcmp(str1,str2);
    if (d==0)
    {
        printf("String is Palimdrome.\n");
    }
    else
    printf("String is not Palimdrome.\n");



    return 0;
}

