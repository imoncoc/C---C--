#include<iostream>
using namespace std;
void f(int a, int n){
    if(a > n) return;

    cout<<"Imon"<<endl;
    f(a+1, n);
}
int main(){
    int n;
    cin>>n;
    f(1, n);

    return 0;
}

