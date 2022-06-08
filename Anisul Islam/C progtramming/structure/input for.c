#include<stdio.h>
struct person
{
    int age;
    int salary;
};




int main()
{
    struct person person1,person2;

    printf("Enter information for 1st Person.\n");
    printf("Age : ");
    scanf("%d",&person1.age);

    printf("Salary : ");
    scanf("%d",&person1.salary);

    printf("Enter information for 2nd Person.\n");
    printf("Age : ");
    scanf("%d",&person2.age);

    printf("Salary : ");
    scanf("%d",&person2.salary);



    getch ();
}
