#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = INT_MIN;

    for(int i = 0; i < n; i++){
            int d = s[i] - 'a';
        if(d > ans){
            ans = d;
        }
    }

    cout<<ans+1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

