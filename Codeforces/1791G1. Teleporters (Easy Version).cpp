#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n, c;
    cin>>n>>c;
    vector<ll> a(n);

    for(int i = 0; i < n; i++){
        cin>>a[i];
        a[i] += (i+1);
    }

    sort(a.begin(), a.end());
    int ans = 0;
     ll sum = 0;

     for(int i = 0; i < n; i++){
        if(sum + a[i] > c) break;

        sum += a[i];
        ans++;
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

