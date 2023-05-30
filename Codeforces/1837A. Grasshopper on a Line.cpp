#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int x, k;
    cin>>x>>k;

    if(x < k || x % k != 0){
        cout<<1<<endl<<x<<endl;
        return;
    }

    cout<<2<<endl;
    cout<<1<<" "<<(x-1)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

