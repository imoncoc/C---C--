#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n == 0){
        cout<<0<<endl;
    }else{
        cout<<pow(2, n - 1)<<endl;
    }

    return 0;
}
