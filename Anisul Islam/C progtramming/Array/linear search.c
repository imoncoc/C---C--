#include<stdio.h>
int main()
{
    int num[]={10,2,25,36,15};
    int value,position=-1,i;

    printf("Enter the value you want to search : ");
    scanf("%d",&value);

    for (i=0;i<5;i++)
    {
        if (value==num[i])
        {
            position= i+1;
            break;
        }
    }
    if (position==-1)
    {
        printf("The value is not found. ");
    }
    else
    {
        printf("The value is found at %d position.",position);
    }




    return 0;
}
