#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n;
    cin>>n;
    ll ans = 0;
    ans = (n * n + 1) + (n + n + 1);
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

