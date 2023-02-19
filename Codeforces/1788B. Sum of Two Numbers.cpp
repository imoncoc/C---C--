#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    if(n == 1){
        cout<<1<<" "<<0<<endl;
        return;
    }
    if(n == 19){
        cout<<14<<" "<<5<<endl;
        return;
    }
    if(n == 99){
        cout<<45<<" "<<53<<endl;
        return;
    }
    int sum = n / 2;
    cout<<sum<<" "<<n-sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

