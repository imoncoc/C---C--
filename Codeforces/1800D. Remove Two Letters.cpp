#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s, ss = "";
    cin>>s;
    for(int i = 2; i <= n; i++){
        ss.push_back(s[i]);
    }

    int SI = 0, SSI = 0;
    ll ans = 1;
    while(SI < n - 2){
        if(s[SI] != ss[SSI]){
            ans++;
        }
        SI++;
        SSI++;
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

