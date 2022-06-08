#include<stdio.h>
int main()
{
    char str1[]="My name is ";
    char str2[]="Md Imon Hossain\n";

    strcat(str1,str2);
    printf("Str1= %s\n",str1);

    //Design 2
    char str3[]="She is";

    strcat(str3," Eva Islam");
    printf("Str3 = %s\n",str3);



    return 0;
}
