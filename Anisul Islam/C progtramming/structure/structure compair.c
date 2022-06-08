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

    person2.age = 20;
    person2.salary= 15000.50;

    person3 = person2;

    if (person2.age==person3.age && person2.salary==person3.salary)
    {
        printf("Person 2 equals to Person 3.");}

    else
        printf("Not matched.");






}

