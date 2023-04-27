#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 5e4+9;
const int inf = 1e9+9;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a;

    for(ll i = 0; i < n; i++){
        ll x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());

    ll ans1 = a[n-1] * a[n-2];
    ll ans2 = a[0] * a[1];

    cout<<max(ans1, ans2)<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

