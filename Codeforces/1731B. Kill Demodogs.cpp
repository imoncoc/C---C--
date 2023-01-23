#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
ll sq_sum(ll n)
{
    ll ans = (n*(n+1))%mod;
    ans = (ans*(2*n + 1))%mod;
    ans = (ans*inv(6))%mod;
    return ans;
}
ll lin_sum(ll n)
{
    ll ans = (n*(n+1))%mod;
    ans = (ans*inv(2))%mod;
    return ans;
}
void solve(){
    string sans = "NO";
    ll ans = 0, temp = 0, sum = 0, n;
        cin >> n;
        ans = (2 * sq_sum(n-1)) % mod;
        ans = (ans + lin_sum(n-1)) % mod;
        ans = (ans + n * n) % mod;
        ans = (ans * 2022) % mod;
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

