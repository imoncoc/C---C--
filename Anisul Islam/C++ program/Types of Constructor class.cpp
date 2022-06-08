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

  student (int x, double y)
  {
      id = x;
      gpa = y;
  }
  student ()
  {
      cout<<"Default class.";
  }


};
int main()
{
    student imon(101,4.50);
    imon.display();


    student zobayer(102,4.74);
    zobayer.display();

    student op;




    return 0;
}




