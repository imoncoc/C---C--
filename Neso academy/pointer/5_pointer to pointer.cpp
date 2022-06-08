#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* p = &x;
    *p = 6;

    cout<<"p: "<<p<<endl;
    int** q = &p;
    cout<<"q: "<<q<<endl;
    cout<<"*q: "<<*q<<endl;
    int*** r = &q;
    cout<<"r: "<<r<<endl;
    cout<<"*r: "<<*r<<endl;
    cout<<"**r: "<<**r<<endl;

return 0;
}
