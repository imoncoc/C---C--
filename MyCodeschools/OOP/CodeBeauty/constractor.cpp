#include <bits/stdc++.h>
using namespace std;
class Employee{
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
        cout<<"Hello, my name is "<<Name;
        cout<<"My Company name is "<<Company;
        cout<<" I'm "<<Age<<" year's old."<<endl;
    }

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {
    //Employee employee1;
    //employee1.Name = "Md Imon hossain";
    //employee1.Company = "Brain Station 23";
    //employee1.Age = 25;
    //employee1.IntroduceYourself();

    Employee employee1 = Employee("Md Imon hossain", "Brain Station 23", 25);
    employee1.IntroduceYourself();

}


