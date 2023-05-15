#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    if(n % 2 == 1){
        for(int i = 1; i <= n; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i = 2; i <= n+n; i = i+2){
            cout<<i<<" ";
        }
        cout<<endl;
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


