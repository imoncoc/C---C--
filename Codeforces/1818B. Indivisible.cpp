#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    if(n&1){
        cout<<-1<<endl;
        return;
    }

    for(int i = 2; i <= n; i+=2){
        cout<<i<<" "<<i-1<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

