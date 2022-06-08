#include<iostream>
#include<cstring>
using namespace std;
int i,j;
class student
{
public:

    int id;
    string name;
    int age;
    double marks;

//    void bubbleSort(s[i].age, n)
//    {
//
//    }
};
int main()
{
    student s[5];


    cout<<"Enter information for Students."<<endl;
    for (i=0; i<5; i++)
    {
        cout<<"Id : "<<i+101<<endl;

        cout<<"Enter student name : ";
s[i].id= i+101;


        getline(cin,s[i].name);

        cout<<"Enter Age : ";
        cin>>s[i].age;
        cout<<"Enter mark : ";
        cin>>s[i].marks;
        cin.ignore();
        cout<<endl;

    }
    cout<<endl;

    for (i=0; i<5; i++)
    {
        cout<<"Student id : "<<i+101<<endl;
        cout<<"Name : "<<s[i].name<<endl;
        cout<<"Age : "<<s[i].age<<endl;
        cout<<"Mark : "<<s[i].marks<<endl<<endl;
    }

student maxs=s[0],min;

for (i=1;i<5;i++)
{
    if (s[i].age>maxs.age)
    {
        maxs=s[i];
    }
}


cout<<"Student id : "<<maxs.id<<endl;
        cout<<"Name : "<<maxs.name<<endl;
        cout<<"Age : "<<maxs.age<<endl;
        cout<<"Mark : "<<maxs.marks<<endl<<endl;



    return 0;
}
