 #include<stdio.h>
 int main()
 {
     char lower,upper;
     printf("Enter a uppercase letter :");
     scanf("%c",&upper);
     lower = tolower(upper);
     printf("convert into lower grade letter : %c",lower);

     return 0;
 }
