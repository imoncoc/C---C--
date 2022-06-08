#include<stdio.h>
int main()
{
    char name[30];
    char name2[30];


    scanf("%s",&name);
    strrev(name);

    name[30]=name2[30];

    int d= strcmp(name,name2);

    if (d==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
