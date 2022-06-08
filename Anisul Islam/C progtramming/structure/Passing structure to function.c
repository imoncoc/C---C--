#include<stdio.h>
struct person
{
    char name[20];
    int age;
    float salary;
};
void display(struct person p)
{
    printf("\nName : %s\n",p.name);
    printf("Age : %d\n",p.age);
    printf("Salary : %.2f\n",p.salary);
}

int main()
{
    struct person person1,person2;
    strcpy(person1.name,"Md Imon hossain");
    person1.age=24;
    person1.salary=100;

    display(person1);

    strcpy(person2.name,"Md Zobayer");
    person2.age=24;
    person2.salary=35000;

    display(person2);


    getch();
}
