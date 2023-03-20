#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) cin>>arr[i];

    sort(arr.begin(), arr.end());
    ll sm = 1;

    if(arr[0] != 1){
        cout<<"NO"<<endl;
        return;
    }

    for(ll i = 1; i < n; i++){
        if(arr[i] <= sm){
            sm += arr[i];
            continue;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

