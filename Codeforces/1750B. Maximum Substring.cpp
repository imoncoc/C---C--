#include <bits/stdc++.h>
using namespace std;
void solve(){
     int n;
     cin>>n;
     string s;
     cin>>s;

        long long ones=count(s.begin(),s.end(),'1');
        long long zeroes=count(s.begin(),s.end(),'0');

        long long ans = ones * zeroes;

        long long  cons = 0;
        for(int i = 0; i < n; i++){
            cons++;
            if(i == n-1 || s[i+1] != s[i]){
                ans=max(ans, cons * cons);
                cons=0;
            }
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

