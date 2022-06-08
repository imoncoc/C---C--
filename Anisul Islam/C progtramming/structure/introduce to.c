#include<stdio.h>
struct person
{
    int age;
    float salary;
};


int main()
{
    struct person person1,person2,person3;

    person1.age = 35;
    person1.salary = 20000;

    printf("Person 1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);

    person2.age = 28;
    person2.salary = 17000;

    printf("\nPerson 2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

    person3.age = 23;
    person3.salary = 14000;

    printf("\nPerson 3 : \n");
    printf("Age = %d\n",person3.age);
    printf("Salary = %.2f\n",person3.salary);



    getch ();
}
