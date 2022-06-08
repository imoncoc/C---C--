#include<stdio.h>
struct person
{
    char name[20];
    int age;
    float salary;
    char number[5];
};



int main()
{
    struct person person1,person2;

    strcpy(person1.name,"Imon");

    person1.age=24;
    person1.salary=50;
    strcpy (person1.number,"01521325206");

    strcpy(person2.name,"Zobayer");

    person2.age=24;
    person2.salary=35000;
    strcpy (person2.number,"01521325206");

    printf("Information for person.\n");
    printf("Name = %s\n",person1.name);
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);
    printf("Phone Number  = %s\n",person1.number);


    printf("Information for person.\n");
    printf("Name = %s\n",person2.name);
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);
    printf("Phone Number  = %s\n",person2.number);

    printf("Struct memory = %d",sizeof(struct person));


    getch();
}
