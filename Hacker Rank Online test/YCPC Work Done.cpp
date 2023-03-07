#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    double  x, d1, d2;
    cin>>x>>d1>>d2;
    double ans = (x * d1)/d2;
    ans = ceil(ans);
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

