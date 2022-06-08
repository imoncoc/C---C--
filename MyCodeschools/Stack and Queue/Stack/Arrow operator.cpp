#include<iostream>
using namespace std;

struct student{
    int rollno;
    char sex;
};

int main(){
    student anil;
    student* anilptr;

    anilptr = &anil;

    anil.rollno = 1234;
    anilptr -> sex = 'm';

    cout  << anilptr -> rollno<<endl;
    cout << anil.sex<<endl;

    student imon;
    student* imonptr;
    imonptr = &imon;
    imon.rollno = 1;
    imon.sex = 'm';

    cout << imonptr -> rollno << endl;
    cout << imon.sex << endl;
    cout<< imonptr<<endl;
}
