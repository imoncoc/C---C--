#include <bits/stdc++.h>
using namespace std;
void f(int i, int n){
    if(i < 1){
        return;
    }
    //cout<<"Raj: "<<i<<endl;
    f(i-1, n);
    cout<<"Striver: "<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    f(5, n);
}
