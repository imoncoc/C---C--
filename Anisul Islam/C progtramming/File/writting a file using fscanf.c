#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];

    file = fopen("text.txt","r");

    if (file==NULL)
    {
        printf("File doesn't exist.");
    }
    else
    {
        printf("File is opened\n");
        fscanf(file,"%s",&name);
        printf("%s\n",name);
        fclose;
    }


    getch();
}
