#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int x, y;
    cin>>x>>y;
    int a = abs(x), b = abs(y);
    ll ans = a + b;
    if(a > b){
        ans += (a - 1) - b;
    }
    else if(b > a){
        ans += (b - 1) - a;
    }


    cout<< ans <<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

