#include<stdio.h>
int main()
{
    char str1[20]="Bangladesh";
    char str2[20]="Australia";
    char temp[20];

    printf("Before String copy\n");
    printf("Str1 = %s\n",str1);
    printf("Str2 = %s\n",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("\nAfter String copy\n");
    printf("Str1 = %s\n",str1);
    printf("Str2 = %s\n",str2);


    getch ();
}
