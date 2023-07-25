#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n, k;
    cin>>n>>k;

    k= min((int)k, 61);
    ll x = ((1LL<<k));
    ll y = n + 1LL;

    ll ans = min(x, y);

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

