#include<stdio.h>
enum days_of_week
{
    sun=100,mon,tue=87,wed,thu,fri,sat
};

int main()
{
    enum days_of_week day1,day2;

    day1=wed;
    day2=fri;

    printf("Day 1 = %d\n",day1);

    int dif=day2-day1;
    printf("Day difference = %d",dif);


    getch();
}
