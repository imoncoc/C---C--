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

    void setValue(int x, double y)
    {
        id = x;
        gpa = y;
    }


};
int main()
{
    student imon;
    imon.setValue (101,4.50);
    imon.display();


    student zobayer;
   zobayer.setValue(102,4.74);
    zobayer.display();




    return 0;
}


