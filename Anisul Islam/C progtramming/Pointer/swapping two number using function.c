#include<stdio.h>
void swaping(int *ptr1, int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

}




int main()
{
    int x=10,y=20;

    printf("Before swapping.\n");
    printf("X = %d\n",x);
    printf("Y = %d\n",y);

    swaping(&x,&y);

    printf("After Swapping.\n");
    printf("X= %d\n",x);
    printf("Y= %d\n",y);



}
