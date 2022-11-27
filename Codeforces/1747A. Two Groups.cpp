#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    ll sum = 0;

    for(int i = 0; i < n; i++){
            int x;
        cin>>x;
        sum  += x;
    }

    cout<<abs(sum)<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

