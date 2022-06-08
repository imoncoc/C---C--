#include<iostream>
using namespace std;
class student
{
public :
    int id;
    double gpa;

    void display()
    {
       cout<<id<<" "<<gpa<<endl;
    }


};
int main()
{
    student imon;
    imon.id = 101;
    imon.gpa = 4.50;
    imon.display();


    student zobayer;
    zobayer.id = 102;
    zobayer.gpa = 4.74;
    zobayer.display();




    return 0;
}

