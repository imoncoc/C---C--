#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char, int> mp;

    for(int i = 0; i < n; i++){
        if(mp.find(s[i]) == mp.end()){
            mp[s[i]] = i;
        }
        else{
            int diff = i - mp[s[i]];
            if(diff % 2 == 1){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}
