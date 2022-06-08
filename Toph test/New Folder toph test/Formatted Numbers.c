#include<stdio.h>
#include<string.h>
int main()
{
    char name[30],name2[30];
    int i,len=0,j;
    long long int number;

    scanf("%lld",&number);
    //printf("%d\n", number);

    sprintf(name, "%lld", number);


    len = strlen(name);
    int remainder = len % 3;

    if (remainder > 0) {
        if (remainder == 1) {
            printf("%c",name[0]);
            i = 1;
            j = 1;
        }
        else if(remainder == 2) {
            printf("%c%c",name[0], name[1]);
            i = 2;
            j = 2;
        }
        if (len > 2)  {
            printf(",");
        }
    }
    else {
        i = 0;
        j = 0;
    }

    for ( ; i < len; ++i) {
        if ((i - j) % 3 == 0 && (i - j) > 0) {
            printf(",");
        }
        printf("%c", name[i]);
    }
    printf("\n");


    return 0;
}
