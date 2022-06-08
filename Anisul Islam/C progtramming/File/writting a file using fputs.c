#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];

    file = fopen("text.txt","w");

    if (file==NULL)
    {
        printf("File doesn't exist.");
    }
    else
    {
        printf("File is opened.\n");
        printf("Enter your full name : ");
        gets(name);

        fputs(name,file);
        printf("File written successfully.");
        fclose(file);
    }


    getch();
}
