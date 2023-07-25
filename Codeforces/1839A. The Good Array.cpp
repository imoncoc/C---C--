#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n,k,s=0;cin>>n>>k;
      s = (n-2) / k;
      cout<< s+2 <<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

