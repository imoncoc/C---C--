#include<iostream>
using namespace std;
int count = 0;
void f(){
    int i = 1;
    cout<<i++<<endl;
    f();
}
int main(){
    int test = 3;
    f();


    return 0;
}
