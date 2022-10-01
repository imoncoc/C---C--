#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n, c, ans = 0;
    cin>>n>>c;
    map<int, long long> mp;

    for(int i = 0; i< n; i++){
        int x;
        cin>>x;
        mp[x]++;
    }

    for(auto it: mp){
        ans += min(it.second, c);
        //cout<<"second: "<<it.second<<" ";
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

