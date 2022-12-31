#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n, m;
    cin>>n>>m;
    vector<ll> arr1(n);
    vector<ll> arr2(m);
    ll ans = 0;

    for(ll i = 0; i < n; i++){
        cin>>arr1[i];
    }

    for(ll i = 0; i < m; i++){
        cin>>arr2[i];
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end(), greater<int>());

    if(n == m){
        for(ll i = 0; i < m; i++){
            ans += arr2[i];
        }
    }
    else if(n > m){
        for(ll i = 0; i < m; i++){
            ans += arr2[i];
        }
        for(ll i = m; i < n; i++){
            ans += arr1[i];
        }
    }
    else{
        if(m > n){
            for(ll i = 0; i < n; i++){
                ans += arr2[i];
            }
        }
    }

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

