#include<stdio.h>
int main()
{
    int year;
    printf("Enter year : ");
    scanf("%d",&year);

    if (year%400==0)
        printf("Year is leap year.");
    else if (year%4==0 && year%100!=0)
        printf("Year is leap year.");
    else
        printf("Year isn't leap year");
    return 0;
}
