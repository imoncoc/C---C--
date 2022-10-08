#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long c, s;
    cin>>c>>s;

    if(c >= s){
        cout<<s<<endl;
    }
    else{
        long long d = s / c;
        if(s % c == 0){
            cout<<c*d*d<<endl;
        }
        else{
            long long ans = (s % c) * (d+1) *(d+1);
            ans += (c - s % c) * d * d;

            cout<<ans<<endl;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

