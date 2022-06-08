#include<iostream>
using namespace std;
class student
{
public :
    int id;
    double gpa;
};
int main()
{
    student imon;
    imon.id = 101;
    imon.gpa = 4.50;

    cout<<imon.id<<" "<<imon.gpa<<endl;

    student zobayer;
    zobayer.id = 102;
    zobayer.gpa = 4.74;

    cout<<zobayer.id<<" "<<zobayer.gpa<<endl;



    return 0;
}
