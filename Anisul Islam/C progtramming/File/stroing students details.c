#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age,num,i,phoneNumber;

    file = fopen("student.txt","a");

    if (file==NULL)
    {
        printf("File doesn't open");
    }
    else
    {
        printf("File is opened.\n");
        printf("Enter how many students : ");
        scanf("%d",&num);
        for (i=0;i<num;i++)
        {
            printf("Enter student name : ");
            scanf("%s",&name);

            printf("Enter student age : ");
            scanf("%d",&age);

            printf("Enter student number : ");
            scanf("%d",&phoneNumber);

            fprintf(file,"\n%s\t%d\t%d",name,age,phoneNumber);
        }

        fclose;
    }


    return 0;
}
