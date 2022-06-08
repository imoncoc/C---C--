#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age;

    file = fopen("text.txt","a");

    if (file==NULL)
    {
        printf("File doesn't exist.");
    }
    else
    {
        printf("File is opened.\n");
        printf("Enter your full name : ");
        gets(name);

        printf("Enter your age : ");
        scanf("%d",&age);

        fprintf(file,"Name = %s, Age = %d",name,age);

        printf("File written successfully.");
        fclose(file);
    }


    getch();
}

