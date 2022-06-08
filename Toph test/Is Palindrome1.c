#include<stdio.h>

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}


int main()
{
    char name[30],name1[30];
    int i=0,len=0,j;
    scanf("%s",&name);

    //printf("%s\n",name);
    strcpy(name1,name);
   // printf("Name 1 copy = %s\n",name1);

    strrev(name1);
//printf("Name 1 rev = %s\n",name1);

    if (strcmp(name1,name)==0){
        printf("Yes");
    }
    else
        printf("No");

   /* while (name[i]!='\0')
    {
        i++;
        len++;
    }*/

}
