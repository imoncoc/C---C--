#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
    cin>>a>>b>>c;
    long long a1 = abs(b-c) + abs(c-1);
    long long a2 = abs(a-1);

    if(a1 > a2) cout<<1<<endl;
    else if(a1 < a2) cout<<2<<endl;
    else cout<<3<<endl;
    }




    return 0;
}

