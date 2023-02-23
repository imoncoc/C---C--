#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, m;
    string s,t;
    cin>>n>>m;
    cin>>s>>t;
    reverse(t.begin(), t.end());
    s = s+t;
    int count = 0;

    for(int i = 0; i < n+m; i++){
        if(s[i-1] == s[i]) count++;
    }

    if(count <= 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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

