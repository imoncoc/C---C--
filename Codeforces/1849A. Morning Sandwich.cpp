#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int b, c, h;
    cin>>b>>c>>h;
    int res = c + h;
    int ans = 0;

    if(res >= b ){
        ans = b + b - 1;
    }
    else if (b > res){
        ans = res + res+1;
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

