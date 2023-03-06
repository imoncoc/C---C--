#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, k;
    string s;
    cin>>n>>k;
    cin>>s;

    map<char, int> mp;
    int ans = INT_MIN;

    for(int i = 0; i < n; i++ ){
            int x = s[i];
    if(x < 97){
        mp[s[i] +32]++;
    }
    else
        mp[s[i]]++;
    }

    for(auto it: mp){
            if(ans < it.second){
                ans = it.second;
            }
        //cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<ans- 1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

