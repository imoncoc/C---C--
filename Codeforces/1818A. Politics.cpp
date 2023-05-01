#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, m;
    cin>>n>>m;
    string s[n];

    for(int i = 0; i < n; i++){
        cin>>s[i];
    }

    int ans = 1;
    for(int i = 1; i < n; i++){
        ans += (s[i] == s[0]);
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

