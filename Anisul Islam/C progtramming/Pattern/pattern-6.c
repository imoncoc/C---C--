#include<stdio.h>
int main()
{
    char n,row,col;
    printf("Enter n = ");
    scanf("%c",&n);

    for (row='a';row<=n;row++)
    {
        for (col='a';col<=row;col++)
        {
            printf("%c ",row);
        }
            printf("\n");
    }
}

