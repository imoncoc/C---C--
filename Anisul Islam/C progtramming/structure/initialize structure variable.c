#include<stdio.h>
struct person
{
    int age;
    float salary;
};




int main()
{
    struct person person1= {35,20000.50};
    struct person person2,person3;

    printf("Person 1 informations : \n");
    printf("Age = ");
    scanf("%d",&person1.age);
    printf("Salary = ");
    scanf("%.2f",&person1.salary);

    person2.age = 20;
    person2.salary= 15000.50;

    printf("\nPerson 2 informations : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f",person2.salary);

    person3 = person2;

    printf("\n\nPerson 3 informations : \n");
    printf("Age = %d\n",person3.age);
    printf("Salary = %.2f",person3.salary);





}
