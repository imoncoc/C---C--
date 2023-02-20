#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    int ans = 0, prev = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        ans += (x - prev) / 120;
        prev = x;
    }
    ans += (1440 - prev) / 120;

    cout<< (ans >= 2? "YES": "NO") << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

