#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    ll odd = 0, even = 0;

    for(ll i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(ll i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even++;
        }
        else if(arr[i] % 2 == 1){
            odd++;
        }

        if(even == 1){
            if(arr[i] % 2 == 1){
            odd++;
            break;
        }
        }

        if(odd == 1){
            if(arr[i] % 2 == 0){
            even++;
            break;
        }
        }
    }

    if(even >= 1 && odd >= 1){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

