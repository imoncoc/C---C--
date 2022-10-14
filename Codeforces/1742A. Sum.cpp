#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    string ans = "NO";

    if( a + b == c || a + c == b || b+c == a){
        ans = "YES";
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

