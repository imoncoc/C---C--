#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, q;
    cin>>n>>q;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++){
        cin>>arr[i];
    }

    while(q--){
            vector<ll> res = arr;
        ll a, b, c;
        cin>>a>>b>>c;

        for(ll i = a-1; i < b; i++){
            res[i] = c;
        }

        //cout<<"res: ";
        ll sum = 0;
    for(ll i = 0; i < n; i++){
       // cout<<res[i]<<" ";
        sum += res[i];
    }
    //cout<<endl;
    //cout<<endl;

    if(sum % 2 == 0 ){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
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

