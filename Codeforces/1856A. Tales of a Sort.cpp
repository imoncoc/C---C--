#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n);

    for(ll i = 0; i < n; i++){
        cin>>arr[i];
    }

    bool flag = false;

    ll maxi = -1;
    for(ll i = 0; i < n-1; i++){
        if( !(arr[i] <= arr[i+1]) ){
            flag = true;
            maxi = max(maxi, arr[i]);
        }
    }

    //cout<<"min: "<<mini<<endl;
    //cout<<"max: "<<maxi<<endl;

    if(flag){
          //cout<<"ans: "<<maxi<<endl;
          cout<<maxi<<endl;
    }
    else{
        //cout<<"ans: "<<0<<endl;
        cout<<0<<endl;
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

