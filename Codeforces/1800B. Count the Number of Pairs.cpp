#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, k;
    string s;
    cin>>n>>k;
    cin>>s;

    ll ans = 0;
    map<char, int> freq;
    for(auto c: s){
        freq[c]++;
    }

    for(char c = 'a'; c <= 'z'; c++){
        int mn = min(freq[c], freq[(c-32)]);
        ans += mn;
        freq[c] -= mn;
        freq[c-32] -= mn;
    }

    for(char c = 'a'; c <= 'z'; c++){
        int add = max(freq[c], freq[c-32]);
        int mn = min(k, add/2);
        ans += mn;
        k -= mn;
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

