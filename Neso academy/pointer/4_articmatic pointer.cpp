#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int* p = &a;

    cout<<"P is memory: "<<p<<endl;
    cout<<"P is value: "<<*p<<endl;

    cout<<"After increase value P is memory: "<<p+1<<endl;

    return 0;
}
