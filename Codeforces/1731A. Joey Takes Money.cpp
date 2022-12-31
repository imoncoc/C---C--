#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n;
    cin>>n;
    ll ans = 1;
    for(ll i = 0; i < n; i++){
        ll x;
        cin>>x;
        ans = ans * x;
        cout<<"ans: "<<ans<<endl;
    }
    cout<<( (ans) + (n - 1) )*2022<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

