#include<stdio.h>
struct book
{
    char name[20];
    int prize;
};



int main()
{
    typedef struct book BOOK;

    BOOK b= {"amr jibon kotha",350 };
    printf("Book name : %s\n",b.name);
    printf("Book prize : %d taka \n",b.prize);



    getch();
}
