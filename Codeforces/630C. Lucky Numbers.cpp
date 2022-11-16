#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    long long ans = 0;
    long long k = 2;

    for(int i = 1; i <= n; i++){
        ans += k;
        k = k * 2;
    }

    cout<<ans<<endl;
}
int main(){
    int t;
    t = 1;
    while(t--){
        solve();
    }


    return 0;
}

