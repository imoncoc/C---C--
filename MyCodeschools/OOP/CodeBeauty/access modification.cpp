#include <bits/stdc++.h>
using namespace std;
class Employee{
public:
    string name;
    string company;
    int age;

    void introduceYourself(){
        cout<<"Hello, my name is "<<name;
        cout<<"My Company name is "<<company;
        cout<<" I'm "<<age<<" year's old."<<endl;
    }
};

int main() {
    Employee employee1;
    employee1.name = "Md Imon hossain";
    employee1.company = "Brain Station 23";
    employee1.age = 25;
    employee1.introduceYourself();

}

