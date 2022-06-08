#include<stdio.h>
int main()
{
    char n,row,col;
    printf("Enter n = ");
    scanf("%c",&n);

    for (row='A';row<=n;row++)
    {
        for (col='A';col<=row;col++)
        {
            printf("%c ",col);
        }
            printf("\n");
    }
}

