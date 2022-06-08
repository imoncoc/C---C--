#include<stdio.h>
int main()
{
    char s1[]="Md Imon Hosaain.";

    int i=0,len=0;

    while (s1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Length = %d",len);

    return 0;
}
