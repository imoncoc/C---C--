#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans = 0;

    if( (a > b && a < c) || (a < b && a > c) ) {
        ans = a;
    }
    if( (b > a && b < c) || (b < a && b > c) ) {
        ans = b;
    }
    if( (c > b && c < a) || (c < b && c > a) ) {
        ans = c;
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

